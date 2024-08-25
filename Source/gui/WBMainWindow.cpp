#include <QtWidgets>
#include <QToolTip>
#include <QStackedLayout>

#include "WBMainWindow.h"
#include "core/WBApplication.h"
#include "core/WBApplicationController.h"
#include "board/WBBoardController.h"
#include "core/WBDisplayManager.h"

// 处理在 MAC OS 上使用 Qt 4.8.0 及以上版本时的平板事件的解决方案
#if defined(Q_OS_OSX)
#include "board/WBBoardView.h"
#endif

#include "core/memcheck.h"

// 构造函数，初始化主窗口
WBMainWindow::WBMainWindow(QWidget* parent, Qt::WindowFlags flags)
    : QMainWindow(parent, flags)
    , mBoardWidget(0)  // 初始化指针为 0，表示没有设置组件
    , mWebWidget(0)    // 初始化指针为 0，表示没有设置组件
    , mDocumentsWidget(0)  // 初始化指针为 0，表示没有设置组件
    , mWindowShareWidget(0)
    , mpDownloadWidget(NULL)  // 初始化下载组件指针为 NULL
{
    Ui::MainWindow::setupUi(this);  // 设置 UI 界面

    mpDownloadWidget = new WBDownloadWidget();  // 创建下载组件的实例
    mpDownloadWidget->setWindowModality(Qt::ApplicationModal);  // 设置为应用程序模态，阻止其他窗口交互

    // 静态设置工具提示的颜色，因为在不同的颜色主题下工具提示颜色效果不佳
    QPalette toolTipPalette;
    toolTipPalette.setColor(QPalette::ToolTipBase, QColor("#FFFFDC"));  // 设置工具提示背景色
    toolTipPalette.setColor(QPalette::ToolTipText, Qt::black);  // 设置工具提示文本颜色
    QToolTip::setPalette(toolTipPalette);  // 应用设置的调色板到工具提示

    QWidget* centralWidget = new QWidget(this);  // 创建中央组件
    centralWidget->setMinimumWidth(200);  // 设置中央组件的最小宽度
    mStackedLayout = new QStackedLayout(centralWidget);  // 创建堆叠布局，用于管理不同的页面组件
    setCentralWidget(centralWidget);  // 设置中央组件为主窗口的中央组件

#ifdef Q_OS_OSX
    actionPreferences->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Comma));  // 在 macOS 上设置快捷键 Ctrl + , 为首选项
    actionQuit->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Q));  // 在 macOS 上设置快捷键 Ctrl + Q 为退出
#elif defined(Q_OS_WIN)
    actionPreferences->setShortcut(QKeySequence(Qt::ALT + Qt::Key_Return));  // 在 Windows 上设置快捷键 Alt + Enter 为首选项
    // 这个代码段设置无效，因为系统组合键无法手动触发，即使手动添加
    actionQuit->setShortcut(QKeySequence(Qt::ALT + Qt::Key_F4));  // 在 Windows 上设置快捷键 Alt + F4 为退出
#else
    actionQuit->setShortcut(QKeySequence(Qt::ALT + Qt::Key_F4));  // 其他系统上设置快捷键 Alt + F4 为退出
#endif
}

// 析构函数，销毁主窗口
WBMainWindow::~WBMainWindow()
{
    if (NULL != mpDownloadWidget)
    {
        delete mpDownloadWidget;  // 删除下载组件实例
        mpDownloadWidget = NULL;  // 将指针设为 NULL，防止野指针
    }
}

// 添加画板组件到窗口
void WBMainWindow::addBoardWidget(QWidget* pWidget)
{
    if (!mBoardWidget)
    {
        mBoardWidget = pWidget;  // 赋值画板组件指针
        mStackedLayout->addWidget(mBoardWidget);  // 将画板组件添加到堆叠布局中
    }
}

// 切换到画板组件
void WBMainWindow::switchToBoardWidget()
{
    if (mBoardWidget)
    {
        mStackedLayout->setCurrentWidget(mBoardWidget);  // 将当前显示的组件设置为画板组件
    }
}

// 添加网页组件到窗口
void WBMainWindow::addWebWidget(QWidget* pWidget)
{
    if (!mWebWidget)
    {
        mWebWidget = pWidget;  // 赋值网页组件指针
        mStackedLayout->addWidget(mWebWidget);  // 将网页组件添加到堆叠布局中
    }
}

// 切换到网页组件
void WBMainWindow::switchToWebWidget()
{
    qDebug() << "popped out from StackedLayout size height: " << mWebWidget->height() << " width: " << mWebWidget->width();
    if (mWebWidget)
    {
        mStackedLayout->setCurrentWidget(mWebWidget);  // 将当前显示的组件设置为网页组件
    }
}

// 添加文档组件到窗口
void WBMainWindow::addDocumentsWidget(QWidget* pWidget)
{
    if (!mDocumentsWidget)
    {
        mDocumentsWidget = pWidget;  // 赋值文档组件指针
        mStackedLayout->addWidget(mDocumentsWidget);  // 将文档组件添加到堆叠布局中
    }
}

// 切换到文档组件
void WBMainWindow::switchToDocumentsWidget()
{
    if (mDocumentsWidget)
    {
        mStackedLayout->setCurrentWidget(mDocumentsWidget);  // 将当前显示的组件设置为文档组件
    }
}

// 切换到共享窗口组件
void WBMainWindow::switchToWShareWidget()
{
    if (mWindowShareWidget)
    {
        mStackedLayout->setCurrentWidget(mWindowShareWidget);  // 将当前显示的组件设置为文档组件
    }
}

// 处理键盘按下事件
void WBMainWindow::keyPressEvent(QKeyEvent* event)
{
    QMainWindow::keyPressEvent(event);  // 调用父类的键盘按下事件处理函数
}

// 处理关闭事件
void WBMainWindow::closeEvent(QCloseEvent* event)
{
    event->ignore();  // 忽略关闭事件
    emit closeEvent_Signal(event);  // 发射关闭事件信号
}

// 处理在 MAC OS 上使用 Qt 4.8.0 及以上版本时的平板事件的解决方案
#if defined(Q_OS_OSX)
bool WBMainWindow::event(QEvent* event)
{
    bool bRes = QMainWindow::event(event);  // 调用父类的事件处理函数

    if (NULL != WBApplication::boardController)
    {
        WBBoardView* controlV = WBApplication::boardController->controlView();
        if (controlV && controlV->isVisible())
        {
            switch (event->type())
            {
            case QEvent::TabletEnterProximity:  // 处理平板进入接近事件
            case QEvent::TabletLeaveProximity:  // 处理平板离开接近事件
            case QEvent::TabletMove:  // 处理平板移动事件
            case QEvent::TabletPress:  // 处理平板按下事件
            case QEvent::TabletRelease:  // 处理平板释放事件
            {
                return controlV->directTabletEvent(event);  // 直接处理平板事件
            }
            }
        }
    }
    return bRes;  // 返回事件处理结果
}
#endif

// 导出完成后的处理
void WBMainWindow::onExportDone()
{
    // 解决方案：当在导出文档时打开文件保存对话框时，工具栏上的一些按钮会无故被禁用。我们在这里重新启用它们。
    actionExport->setEnabled(true);  // 启用“导出”按钮
    actionNewDocument->setEnabled(true);  // 启用“新建文档”按钮
    actionRename->setEnabled(true);  // 启用“重命名”按钮
    actionDuplicate->setEnabled(true);  // 启用“复制”按钮
    actionDelete->setEnabled(true);  // 启用“删除”按钮
    actionOpen->setEnabled(true);  // 启用“打开”按钮
    actionDocumentAdd->setEnabled(true);  // 启用“添加文档”按钮
}

// 是/否确认对话框
bool WBMainWindow::yesNoQuestion(QString windowTitle, QString text)
{
    QMessageBox messageBox;
    messageBox.setParent(this);  // 设置父窗口为当前主窗口
    messageBox.setWindowTitle(windowTitle);  // 设置对话框标题
    messageBox.setText(text);  // 设置对话框文本
    QPushButton* yesButton = messageBox.addButton(tr("Yes"), QMessageBox::YesRole);  // 添加“是”按钮
    messageBox.addButton(tr("No"), QMessageBox::NoRole);  // 添加“否”按钮
    messageBox.setIcon(QMessageBox::Question);  // 设置对话框图标为问题图标

#ifdef Q_OS_LINUX
    // 避免被 x11 处理，这使我们能够保持在所有窗口管理器的后台，如调色板、工具栏等
    messageBox.setWindowFlags(Qt::Dialog | Qt::X11BypassWindowManagerHint);
#else
    messageBox.setWindowFlags(Qt::Dialog);  // 设置为对话框样式
#endif

    messageBox.exec();  // 执行对话框并等待用户输入
    return messageBox.clickedButton() == yesButton;  // 返回用户是否点击“是”按钮
}

// 单按钮消息框
void WBMainWindow::oneButtonMessageBox(QString windowTitle, QString text, QMessageBox::Icon type)
{
    QMessageBox messageBox;
    messageBox.setParent(this);  // 设置父窗口为当前主窗口
    messageBox.setWindowFlags(Qt::Dialog);  // 设置为对话框样式
    messageBox.setWindowTitle(windowTitle);  // 设置对话框标题
    messageBox.setText(text);  // 设置对话框文本
    messageBox.addButton(tr("Ok"), QMessageBox::YesRole);  // 添加“确定”按钮
    messageBox.setIcon(type);  // 设置对话框图标
    messageBox.exec();  // 执行对话框并等待用户输入
}

// 显示警告消息框
void WBMainWindow::warning(QString windowTitle, QString text)
{
    oneButtonMessageBox(windowTitle, text, QMessageBox::Warning);  // 显示警告消息框
}

// 显示信息消息框
void WBMainWindow::information(QString windowTitle, QString text)
{
    oneButtonMessageBox(windowTitle, text, QMessageBox::Information);  // 显示信息消息框
}

// 显示下载组件窗口
void WBMainWindow::showDownloadWidget()
{
    if (NULL != mpDownloadWidget)
    {
        mpDownloadWidget->show();  // 显示下载组件
    }
}

// 隐藏下载组件窗口
void WBMainWindow::hideDownloadWidget()
{
    if (NULL != mpDownloadWidget)
    {
        mpDownloadWidget->hide();  // 隐藏下载组件
    }
}
