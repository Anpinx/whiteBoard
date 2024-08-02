#include "WBZoomPalette.h"

#include <QtWidgets>
#include <QPushButton>
#include <math.h>

#include "core/WBApplication.h"

#include "board/WBBoardController.h"
#include "board/WBBoardView.h"

#include "core/memcheck.h"

WBZoomPalette::WBZoomPalette(QWidget* parent)
    : WBFloatingPalette(Qt::BottomRightCorner, parent)
    , mIsExpanded(1)
{
    mBoardController = WBApplication::boardController;
    QLayout* layout = new QVBoxLayout(this);
    mCurrentZoomButton = new QPushButton(parent);
    mCurrentZoomButton->setStyleSheet(QString("QPushButton { color: white; background-color: transparent; border: none; font-family: Arial; font-weight: bold; font-size: 20px }"));
    mCurrentZoomButton->setFocusPolicy(Qt::NoFocus);
    connect(mCurrentZoomButton, SIGNAL(clicked(bool)), this, SLOT(showHideExtraButton()));
    connect(mBoardController, SIGNAL(zoomChanged(qreal)), this, SLOT(refreshPalette()));
    connect(mBoardController, SIGNAL(activeSceneChanged()), this, SLOT(refreshPalette()));

    mHundredButton = new QPushButton(parent);
    mHundredButton->setStyleSheet(QString("QPushButton { color: white; background-color: transparent; border: none; font-family: Arial; font-weight: bold; font-size: 20px }"));
    mHundredButton->setFocusPolicy(Qt::NoFocus);
    mHundredButton->setIcon(QIcon(":/images/stylusPalette/restoreZoom.png"));
    mHundredButton->setIconSize(QSize(42,42));
    connect(mHundredButton, SIGNAL(clicked(bool)), this, SLOT(goHundred()));

    layout->setContentsMargins(radius() + 15, 4, radius() + 15, 4);
    layout->addWidget(mHundredButton);
    layout->addWidget(mCurrentZoomButton);
    hide();
    refreshPalette();
}

WBZoomPalette::~WBZoomPalette()
{
    delete mCurrentZoomButton;
}

void WBZoomPalette::showHideExtraButton()
{
    if (mIsExpanded)
    {
        mHundredButton->setVisible(false);
        mIsExpanded = false;
        adjustSizeAndPosition(false);
    }
    else
    {
        mHundredButton->setVisible(true);
        mIsExpanded = true;
        adjustSizeAndPosition(true);
    }

}

void WBZoomPalette::goHundred()
{
    mBoardController->zoomRestore();
}

void WBZoomPalette::hide()
{
    qreal currentZoomFactor = mBoardController->currentZoom();

    bool showAsNoZoom = (currentZoomFactor > 0.9 && currentZoomFactor < 1.1);
    if (showAsNoZoom)
    {
        WBFloatingPalette::hide();
    }
}

void WBZoomPalette::refreshPalette()
{
    qreal currentZoomFactor = mBoardController->currentZoom();
    bool showAsNoZoom = (currentZoomFactor > 0.9 && currentZoomFactor < 1.1);
    if (showAsNoZoom)
    {
        currentZoomFactor = 1;
    }
    QString stringFactor = tr("%1 x").arg(currentZoomFactor, 0, 'f', 1);

    mCurrentZoomButton->setText(stringFactor);
    adjustSizeAndPosition();
    if (showAsNoZoom)
    {
        QTimer::singleShot(500, this, SLOT(hide()));
    }
    else
    {
        show();
        raise();
    }
}
