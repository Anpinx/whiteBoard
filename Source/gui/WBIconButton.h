#ifndef WBICONBUTTON_H_
#define WBICONBUTTON_H_

#include <QAbstractButton>

class WBIconButton : public QAbstractButton
{
    Q_OBJECT

public:
    WBIconButton(QWidget *parent = 0, const QIcon &iconOn = QIcon());

    void setToggleable(bool pToggleable) {mToggleable = pToggleable;}

protected:
    virtual void paintEvent(QPaintEvent *);
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseDoubleClickEvent(QMouseEvent *event);
    QSize minimumSizeHint () const;

private:
    QSize mIconSize;
    bool mToggleable;

signals:
    void doubleClicked();
};

#endif /* WBICONBUTTON_H_ */
