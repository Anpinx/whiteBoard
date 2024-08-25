#ifndef UBMAINWINDOW_H_  // ��ֹͷ�ļ����ظ������ĺ궨��
#define UBMAINWINDOW_H_

#include <QMainWindow>  // ���� QMainWindow ���ͷ�ļ�
#include <QWidget>  // ���� QWidget ���ͷ�ļ�
#include <QtWebEngineWidgets/qwebengineview.h>  // ���� QWebEngineView ���ͷ�ļ�
#include <QMessageBox>  // ���� QMessageBox ���ͷ�ļ�
#include "WBDownloadWidget.h"  // �����Զ���� WBDownloadWidget ���ͷ�ļ�

class QStackedLayout;  // ǰ������ QStackedLayout ��

#include "ui_mainWindow.h"  // ����ͨ�� Qt Designer ���ɵ� UI ��ͷ�ļ�

// WBMainWindow ��̳��� QMainWindow �� Ui::MainWindow
class WBMainWindow : public QMainWindow, public Ui::MainWindow
{
	Q_OBJECT  // Qt ����֧꣬���ź���۵Ļ���
public:

	// ���캯�������常���ںʹ��ڱ�־��ʹ��Ĭ�ϲ���
	WBMainWindow(QWidget* parent = 0, Qt::WindowFlags flags = 0);
	virtual ~WBMainWindow();  // ������������ȷ����ȷ����

	// ��Ӻ��л���ͬ�� QWidget ������ѵ�������
	void addBoardWidget(QWidget* pWidget);
	void switchToBoardWidget();

	void addWebWidget(QWidget* pWidget);
	void switchToWebWidget();

	void addDocumentsWidget(QWidget* pWidget);
	void switchToDocumentsWidget();

	// ������/��ȷ�϶Ի�����ʾ�������Ϣ�Ի���
	bool yesNoQuestion(QString windowTitle, QString text);
	void warning(QString windowTitle, QString text);
	void information(QString windowTitle, QString text);

	// ��ʾ�������������
	void showDownloadWidget();
	void hideDownloadWidget();

signals:
	void closeEvent_Signal(QCloseEvent* event);  // �ر��¼����źţ����� QCloseEvent

public slots:
	void onExportDone();  // �ۺ�������������ɺ���¼�

protected:
	// �ܱ����ĺ��������ڴ�������ť��Ϣ�򡢴�����̰����¼��͹ر��¼�
	void oneButtonMessageBox(QString windowTitle, QString text, QMessageBox::Icon type);

	virtual void keyPressEvent(QKeyEvent* event);  // �麯����������̰����¼�
	virtual void closeEvent(QCloseEvent* event);  // �麯���������ڹر��¼�

	// �麯�������ڴ��������˵������� 0 ��ʾ������
	virtual QMenu* createPopupMenu()
	{
		return 0;
	}

	QStackedLayout* mStackedLayout;  // �ѵ�����ָ�룬���ڹ������������

	QWidget* mBoardWidget;  // ָ�򻭰������ָ��
	QWidget* mWebWidget;  // ָ����ҳ�����ָ��
	QWidget* mDocumentsWidget;  // ָ���ĵ������ָ��

private:
#if defined(Q_OS_OSX)
	bool event(QEvent* event);  // �� macOS ϵͳ�����ص��¼�������
#endif
	WBDownloadWidget* mpDownloadWidget;  // ָ�����������ָ��
};

#endif /* WBMAINWINDOW_H_ */  // ����ͷ�ļ����ظ������ĺ궨��
