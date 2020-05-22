#include "pushbtn.h"

PushBtn::PushBtn(QString normalPic,QString pressPic="")
{
    this->normalPic=normalPic;
    this->pressPic=pressPic;
}

void paintEvent(QPaintEvent *);
{
    //绘制窗口背景
    QPainter painter(this);
    QPixmap pix;
    pix.load(bgPic);
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
}

void setNormalPic(QString normalPic);
void setPressPic(QString pressPic);
