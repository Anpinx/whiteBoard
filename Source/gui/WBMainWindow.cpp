#include <QtWidgets>
#include <QToolTip>
#include <QStackedLayout>

#include "WBMainWindow.h"
#include "core/WBApplication.h"
#include "core/WBApplicationController.h"
#include "board/WBBoardController.h"
#include "core/WBDisplayManager.h"

// ������ MAC OS ��ʹ�� Qt 4.8.0 �����ϰ汾ʱ��ƽ���¼��Ľ������
#if defined(Q_OS_OSX)
#include "board/WBBoardView.h"
#endif

#include "core/memcheck.h"

// ���캯������ʼ��������
WBMainWindow::WBMainWindow(QWidget* parent, Qt::WindowFlags flags)
    : QMainWindow(parent, flags)
    , mBoardWidget(0)  // ��ʼ��ָ��Ϊ 0����ʾû���������
    , mWebWidget(0)    // ��ʼ��ָ��Ϊ 0����ʾû���������
    , mDocumentsWidget(0)  // ��ʼ��ָ��Ϊ 0����ʾû���������
    , mWindowShareWidget(0)
    , mpDownloadWidget(NULL)  // ��ʼ���������ָ��Ϊ NULL
{
    Ui::MainWindow::setupUi(this);  // ���� UI ����

    mpDownloadWidget = new WBDownloadWidget();  // �������������ʵ��
    mpDownloadWidget->setWindowModality(Qt::ApplicationModal);  // ����ΪӦ�ó���ģ̬����ֹ�������ڽ���

    // ��̬���ù�����ʾ����ɫ����Ϊ�ڲ�ͬ����ɫ�����¹�����ʾ��ɫЧ������
    QPalette toolTipPalette;
    toolTipPalette.setColor(QPalette::ToolTipBase, QColor("#FFFFDC"));  // ���ù�����ʾ����ɫ
    toolTipPalette.setColor(QPalette::ToolTipText, Qt::black);  // ���ù�����ʾ�ı���ɫ
    QToolTip::setPalette(toolTipPalette);  // Ӧ�����õĵ�ɫ�嵽������ʾ

    QWidget* centralWidget = new QWidget(this);  // �����������
    centralWidget->setMinimumWidth(200);  // ���������������С���
    mStackedLayout = new QStackedLayout(centralWidget);  // �����ѵ����֣����ڹ���ͬ��ҳ�����
    setCentralWidget(centralWidget);  // �����������Ϊ�����ڵ��������

#ifdef Q_OS_OSX
    actionPreferences->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Comma));  // �� macOS �����ÿ�ݼ� Ctrl + , Ϊ��ѡ��
    actionQuit->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Q));  // �� macOS �����ÿ�ݼ� Ctrl + Q Ϊ�˳�
#elif defined(Q_OS_WIN)
    actionPreferences->setShortcut(QKeySequence(Qt::ALT + Qt::Key_Return));  // �� Windows �����ÿ�ݼ� Alt + Enter Ϊ��ѡ��
    // ��������������Ч����Ϊϵͳ��ϼ��޷��ֶ���������ʹ�ֶ����
    actionQuit->setShortcut(QKeySequence(Qt::ALT + Qt::Key_F4));  // �� Windows �����ÿ�ݼ� Alt + F4 Ϊ�˳�
#else
    actionQuit->setShortcut(QKeySequence(Qt::ALT + Qt::Key_F4));  // ����ϵͳ�����ÿ�ݼ� Alt + F4 Ϊ�˳�
#endif
}

// ��������������������
WBMainWindow::~WBMainWindow()
{
    if (NULL != mpDownloadWidget)
    {
        delete mpDownloadWidget;  // ɾ���������ʵ��
        mpDownloadWidget = NULL;  // ��ָ����Ϊ NULL����ֹҰָ��
    }
}

// ��ӻ������������
void WBMainWindow::addBoardWidget(QWidget* pWidget)
{
    if (!mBoardWidget)
    {
        mBoardWidget = pWidget;  // ��ֵ�������ָ��
        mStackedLayout->addWidget(mBoardWidget);  // �����������ӵ��ѵ�������
    }
}

// �л����������
void WBMainWindow::switchToBoardWidget()
{
    if (mBoardWidget)
    {
        mStackedLayout->setCurrentWidget(mBoardWidget);  // ����ǰ��ʾ���������Ϊ�������
    }
}

// �����ҳ���������
void WBMainWindow::addWebWidget(QWidget* pWidget)
{
    if (!mWebWidget)
    {
        mWebWidget = pWidget;  // ��ֵ��ҳ���ָ��
        mStackedLayout->addWidget(mWebWidget);  // ����ҳ�����ӵ��ѵ�������
    }
}

// �л�����ҳ���
void WBMainWindow::switchToWebWidget()
{
    qDebug() << "popped out from StackedLayout size height: " << mWebWidget->height() << " width: " << mWebWidget->width();
    if (mWebWidget)
    {
        mStackedLayout->setCurrentWidget(mWebWidget);  // ����ǰ��ʾ���������Ϊ��ҳ���
    }
}

// ����ĵ����������
void WBMainWindow::addDocumentsWidget(QWidget* pWidget)
{
    if (!mDocumentsWidget)
    {
        mDocumentsWidget = pWidget;  // ��ֵ�ĵ����ָ��
        mStackedLayout->addWidget(mDocumentsWidget);  // ���ĵ������ӵ��ѵ�������
    }
}

// �л����ĵ����
void WBMainWindow::switchToDocumentsWidget()
{
    if (mDocumentsWidget)
    {
        mStackedLayout->setCurrentWidget(mDocumentsWidget);  // ����ǰ��ʾ���������Ϊ�ĵ����
    }
}

// �л������������
void WBMainWindow::switchToWShareWidget()
{
    if (mWindowShareWidget)
    {
        mStackedLayout->setCurrentWidget(mWindowShareWidget);  // ����ǰ��ʾ���������Ϊ�ĵ����
    }
}

// ������̰����¼�
void WBMainWindow::keyPressEvent(QKeyEvent* event)
{
    QMainWindow::keyPressEvent(event);  // ���ø���ļ��̰����¼�������
}

// ����ر��¼�
void WBMainWindow::closeEvent(QCloseEvent* event)
{
    event->ignore();  // ���Թر��¼�
    emit closeEvent_Signal(event);  // ����ر��¼��ź�
}

// ������ MAC OS ��ʹ�� Qt 4.8.0 �����ϰ汾ʱ��ƽ���¼��Ľ������
#if defined(Q_OS_OSX)
bool WBMainWindow::event(QEvent* event)
{
    bool bRes = QMainWindow::event(event);  // ���ø�����¼�������

    if (NULL != WBApplication::boardController)
    {
        WBBoardView* controlV = WBApplication::boardController->controlView();
        if (controlV && controlV->isVisible())
        {
            switch (event->type())
            {
            case QEvent::TabletEnterProximity:  // ����ƽ�����ӽ��¼�
            case QEvent::TabletLeaveProximity:  // ����ƽ���뿪�ӽ��¼�
            case QEvent::TabletMove:  // ����ƽ���ƶ��¼�
            case QEvent::TabletPress:  // ����ƽ�尴���¼�
            case QEvent::TabletRelease:  // ����ƽ���ͷ��¼�
            {
                return controlV->directTabletEvent(event);  // ֱ�Ӵ���ƽ���¼�
            }
            }
        }
    }
    return bRes;  // �����¼�������
}
#endif

// ������ɺ�Ĵ���
void WBMainWindow::onExportDone()
{
    // ������������ڵ����ĵ�ʱ���ļ�����Ի���ʱ���������ϵ�һЩ��ť���޹ʱ����á����������������������ǡ�
    actionExport->setEnabled(true);  // ���á���������ť
    actionNewDocument->setEnabled(true);  // ���á��½��ĵ�����ť
    actionRename->setEnabled(true);  // ���á�����������ť
    actionDuplicate->setEnabled(true);  // ���á����ơ���ť
    actionDelete->setEnabled(true);  // ���á�ɾ������ť
    actionOpen->setEnabled(true);  // ���á��򿪡���ť
    actionDocumentAdd->setEnabled(true);  // ���á�����ĵ�����ť
}

// ��/��ȷ�϶Ի���
bool WBMainWindow::yesNoQuestion(QString windowTitle, QString text)
{
    QMessageBox messageBox;
    messageBox.setParent(this);  // ���ø�����Ϊ��ǰ������
    messageBox.setWindowTitle(windowTitle);  // ���öԻ������
    messageBox.setText(text);  // ���öԻ����ı�
    QPushButton* yesButton = messageBox.addButton(tr("Yes"), QMessageBox::YesRole);  // ��ӡ��ǡ���ť
    messageBox.addButton(tr("No"), QMessageBox::NoRole);  // ��ӡ��񡱰�ť
    messageBox.setIcon(QMessageBox::Question);  // ���öԻ���ͼ��Ϊ����ͼ��

#ifdef Q_OS_LINUX
    // ���ⱻ x11 ������ʹ�����ܹ����������д��ڹ������ĺ�̨�����ɫ�塢��������
    messageBox.setWindowFlags(Qt::Dialog | Qt::X11BypassWindowManagerHint);
#else
    messageBox.setWindowFlags(Qt::Dialog);  // ����Ϊ�Ի�����ʽ
#endif

    messageBox.exec();  // ִ�жԻ��򲢵ȴ��û�����
    return messageBox.clickedButton() == yesButton;  // �����û��Ƿ������ǡ���ť
}

// ����ť��Ϣ��
void WBMainWindow::oneButtonMessageBox(QString windowTitle, QString text, QMessageBox::Icon type)
{
    QMessageBox messageBox;
    messageBox.setParent(this);  // ���ø�����Ϊ��ǰ������
    messageBox.setWindowFlags(Qt::Dialog);  // ����Ϊ�Ի�����ʽ
    messageBox.setWindowTitle(windowTitle);  // ���öԻ������
    messageBox.setText(text);  // ���öԻ����ı�
    messageBox.addButton(tr("Ok"), QMessageBox::YesRole);  // ��ӡ�ȷ������ť
    messageBox.setIcon(type);  // ���öԻ���ͼ��
    messageBox.exec();  // ִ�жԻ��򲢵ȴ��û�����
}

// ��ʾ������Ϣ��
void WBMainWindow::warning(QString windowTitle, QString text)
{
    oneButtonMessageBox(windowTitle, text, QMessageBox::Warning);  // ��ʾ������Ϣ��
}

// ��ʾ��Ϣ��Ϣ��
void WBMainWindow::information(QString windowTitle, QString text)
{
    oneButtonMessageBox(windowTitle, text, QMessageBox::Information);  // ��ʾ��Ϣ��Ϣ��
}

// ��ʾ�����������
void WBMainWindow::showDownloadWidget()
{
    if (NULL != mpDownloadWidget)
    {
        mpDownloadWidget->show();  // ��ʾ�������
    }
}

// ���������������
void WBMainWindow::hideDownloadWidget()
{
    if (NULL != mpDownloadWidget)
    {
        mpDownloadWidget->hide();  // �����������
    }
}
