#ifndef UBMAINWINDOW_H_  // 防止头文件被重复包含的宏定义
#define UBMAINWINDOW_H_

#include <QMainWindow>  // 包含 QMainWindow 类的头文件
#include <QWidget>  // 包含 QWidget 类的头文件
#include <QtWebEngineWidgets/qwebengineview.h>  // 包含 QWebEngineView 类的头文件
#include <QMessageBox>  // 包含 QMessageBox 类的头文件
#include "WBDownloadWidget.h"  // 包含自定义的 WBDownloadWidget 类的头文件

class QStackedLayout;  // 前向声明 QStackedLayout 类

#include "ui_mainWindow.h"  // 包含通过 Qt Designer 生成的 UI 类头文件

// WBMainWindow 类继承自 QMainWindow 和 Ui::MainWindow
class WBMainWindow : public QMainWindow, public Ui::MainWindow
{
	Q_OBJECT  // Qt 对象宏，支持信号与槽的机制
public:

	// 构造函数，定义父窗口和窗口标志，使用默认参数
	WBMainWindow(QWidget* parent = 0, Qt::WindowFlags flags = 0);
	virtual ~WBMainWindow();  // 虚析构函数，确保正确析构

	// 添加和切换不同的 QWidget 组件到堆叠布局中
	void addBoardWidget(QWidget* pWidget);
	void switchToBoardWidget();

	void addWebWidget(QWidget* pWidget);
	void switchToWebWidget();

	void addDocumentsWidget(QWidget* pWidget);
	void switchToDocumentsWidget();

	// 创建是/否确认对话框，显示警告和信息对话框
	bool yesNoQuestion(QString windowTitle, QString text);
	void warning(QString windowTitle, QString text);
	void information(QString windowTitle, QString text);

	// 显示和隐藏下载组件
	void showDownloadWidget();
	void hideDownloadWidget();

signals:
	void closeEvent_Signal(QCloseEvent* event);  // 关闭事件的信号，传递 QCloseEvent

public slots:
	void onExportDone();  // 槽函数，处理导出完成后的事件

protected:
	// 受保护的函数，用于创建单按钮消息框、处理键盘按下事件和关闭事件
	void oneButtonMessageBox(QString windowTitle, QString text, QMessageBox::Icon type);

	virtual void keyPressEvent(QKeyEvent* event);  // 虚函数，处理键盘按下事件
	virtual void closeEvent(QCloseEvent* event);  // 虚函数，处理窗口关闭事件

	// 虚函数，用于创建弹出菜单，返回 0 表示不创建
	virtual QMenu* createPopupMenu()
	{
		return 0;
	}

	QStackedLayout* mStackedLayout;  // 堆叠布局指针，用于管理多个界面组件

	QWidget* mBoardWidget;  // 指向画板组件的指针
	QWidget* mWebWidget;  // 指向网页组件的指针
	QWidget* mDocumentsWidget;  // 指向文档组件的指针

private:
#if defined(Q_OS_OSX)
	bool event(QEvent* event);  // 在 macOS 系统上重载的事件处理函数
#endif
	WBDownloadWidget* mpDownloadWidget;  // 指向下载组件的指针
};

#endif /* WBMAINWINDOW_H_ */  // 结束头文件防重复包含的宏定义
