#include <QDebug>

#include "WBWebKitUtils.h"

#include "core/memcheck.h"

WBWebKitUtils::WBWebKitUtils()
{
    // NOOP
}

WBWebKitUtils::~WBWebKitUtils()
{
    // NOOP
}

QList<WBWebKitUtils::HtmlObject> WBWebKitUtils::objectsInFrame(QWebEnginePage* frame)
{
    QList<WBWebKitUtils::HtmlObject> htmlObjects;

    if (frame)
    {
        frame->runJavaScript("window.document.getElementsByTagName('embed').length");

       /* bool ok;

        int count = res.toInt(&ok);
        if (ok)
        {
            for (int i = 0; i < count; i++)
            {
                QString queryWidth = QString("window.document.getElementsByTagName('embed')[%1].width").arg(i);

                QString queryHeigth = QString("window.document.getElementsByTagName('embed')[%1].height").arg(i);

                QString querySource = QString("window.document.getElementsByTagName('embed')[%1].src").arg(i);

                res = frame->runJavaScript(queryWidth);

                int width = res.toInt(&ok);
                if (width == 0 || !ok)
                {
                    qDebug() << "Width is not defined in pixel. 640 will be used";
                    width = 640;
                }

                res = frame->runJavaScript(queryHeigth);

                int heigth = res.toInt(&ok);
                if (heigth == 0 || !ok)
                {
                    qDebug() << "Height is not defined in pixel. 480 will be used";
                    heigth = 480;
                }
                res = frame->runJavaScript(querySource);

                QUrl baseUrl = frame->url();
                QUrl relativeUrl = QUrl(res.toString());

                QString source = baseUrl.resolved(relativeUrl).toString();

                if (source.trimmed().length() == 0)
                    continue;

                htmlObjects << WBWebKitUtils::HtmlObject(source, width, heigth);
            }
        }*/
    }

    return htmlObjects;
}


