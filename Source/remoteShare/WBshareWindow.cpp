#include "WBshareWindow.h"

void WBshareWindow::cmd_windows()
{
    const char* command = "C:\\D\\Project\\Qtr\\SynchronizedPlayer\\build\\Desktop_Qt_5_15_2_MSVC2019_64bit-Debug\\debug\\Test.exe";
    int result = system(command);
    if (result == 0)
        qDebug("successfully.....");
    else {
        qDebug("Error.....");
    }
}
WBshareWindow::WBshareWindow() {
    cmd_windows();
}
