#include "pushbtn.h"
#include <QPainter>

PushBtn::PushBtn(QString normalPic,QString pressPic="")
{
    //设置弹起和按下图片
    this->setNormalPic(normalPic);
    this->setPressPic(pressPic);

    //设置按钮无边框
    this->setStyleSheet("QPushBotton{border:0px;}");

    //初始化按钮图片
    QPixmap pix;
    pix.load(normalPic);
    this->setFixedSize(pix.width(),pix.height());
    this->setIcon(pix);
    this->setIconSize(QSize(pix.width(),pix.height()));
}

void PushBtn::setNormalPic(QString normalPic)
{
    this->normalPic=normalPic;
}

void PushBtn::setPressPic(QString pressPic)
{
    this->pressPic=pressPic;
}

void PushBtn::mousePressEvent(QMouseEvent *e)
{
    if(this->pressPic!="")
    {
        QPixmap pix;
        pix.load(pressPic);
        this->setFixedSize(pix.width(),pix.height());
        this->setIcon(pix);
        this->setIconSize(QSize(pix.width(),pix.height()));
    }

    return QPushButton::mousePressEvent(e);
}

void PushBtn::mouseReleaseEvent(QMouseEvent *e)
{
    QPixmap pix;
    pix.load(normalPic);
    this->setFixedSize(pix.width(),pix.height());
    this->setIcon(pix);
    this->setIconSize(QSize(pix.width(),pix.height()));

    return QPushButton::mouseReleaseEvent(e);
}
