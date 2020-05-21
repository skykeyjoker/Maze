#include "obj.h"
#include <QPainter>

Obj::Obj(QWidget *parent) : QWidget(parent)
{

}

void Obj::paintEvent(QPaintEvent *)
{
    //绘制图像
    QPainter painter(this);
    QPixmap pix;
    pix.load(pic);
    painter.drawPixmap(0,0,pix.width(),pix.height(),pix);
}

void Obj::setPic(QString pic)
{
    this->pic=pic;
    this->update();
}
