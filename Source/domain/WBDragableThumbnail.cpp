#include "WBDragableThumbnail.h"

#include <QPainter>
#include <QMimeData>
#include <QDrag>

WBDraggableThumbnail::WBDraggableThumbnail(QWidget* parent, const QPixmap& pixmap) :
    QFrame(parent)
    , mThumbnail(new QLabel(this))
    , mHBoxLayout(new QHBoxLayout(this))
{    
    setFrameStyle(QFrame::Sunken | QFrame::StyledPanel);
    setAcceptDrops(true);

    //set stylesheet
    setObjectName("DockPaletteWidgetBox");
    setStyleSheet("background:white");

    mHBoxLayout->setAlignment(Qt::AlignHCenter);

    setThumbnail(pixmap);

    setLayout(mHBoxLayout);
}

void WBDraggableThumbnail::setThumbnail(const QPixmap& pixmap)
{
    mThumbnail->setAttribute(Qt::WA_DeleteOnClose);
    setPixmap(pixmap);

    mHBoxLayout->addWidget(mThumbnail);
}

void WBDraggableThumbnail::setPixmap(const QPixmap& pixmap)
{
    mThumbnail->setPixmap(pixmap);
}

void WBDraggableThumbnail::dragEnterEvent(QDragEnterEvent *event)
{
     if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
         if (event->source() == this) {
             event->setDropAction(Qt::MoveAction);
             event->accept();
         } else {
             event->acceptProposedAction();
         }
     } else {
         event->ignore();
     }
 }

 void WBDraggableThumbnail::dragMoveEvent(QDragMoveEvent *event)
 {
     if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
         if (event->source() == this) {
             event->setDropAction(Qt::MoveAction);
             event->accept();
         } else {
             event->acceptProposedAction();
         }
     } else {
         event->ignore();
     }
}

void WBDraggableThumbnail::dropEvent(QDropEvent *event)
{
     if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
         QByteArray itemData = event->mimeData()->data("application/x-dnditemdata");
         QDataStream dataStream(&itemData, QIODevice::ReadOnly);

         QPixmap pixmap;
         QPoint offset;
         dataStream >> pixmap >> offset;

         mThumbnail = new QLabel(this);
         setThumbnail(pixmap);

         if (event->source() == this) {
             event->setDropAction(Qt::MoveAction);
             event->accept();
         } else {
             event->acceptProposedAction();
         }
     } else {
         event->ignore();
     }
}

void WBDraggableThumbnail::mousePressEvent(QMouseEvent *event)
{
    QLabel *child = static_cast<QLabel*>(childAt(event->pos()));
    if (!child)
      return;

    QPixmap pixmap = *child->pixmap();

    QByteArray itemData;
    QDataStream dataStream(&itemData, QIODevice::WriteOnly);
    dataStream << pixmap << QPoint(event->pos() - child->pos());

    QMimeData *mimeData = new QMimeData;
    mimeData->setData("application/x-dnditemdata", itemData);

    QDrag *drag = new QDrag(this);
    drag->setMimeData(mimeData);
    drag->setPixmap(pixmap);
    drag->setHotSpot(event->pos() - child->pos());

    QPixmap tempPixmap = pixmap;
    QPainter painter;
    painter.begin(&tempPixmap);
    painter.fillRect(pixmap.rect(), QColor(127, 127, 127, 127));
    painter.end();

    child->setPixmap(tempPixmap);

    if (drag->exec(Qt::CopyAction | Qt::MoveAction, Qt::CopyAction) == Qt::MoveAction)
      child->close();
    else {
      child->show();
      child->setPixmap(pixmap);
    }
}

