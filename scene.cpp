#include "scene.h"
#include<QPainter>

Scene::Scene(QWidget *parent,QString bgPic)
    : QWidget(parent),bgPic(bgPic)
{
    setFixedSize(800,600);
}

void Scene::paintEvent(QPaintEvent *)
{
    //绘制窗口背景
    QPainter painter(this);
    QPixmap pix;
    pix.load(bgPic);
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
}

void Scene::setBg(QString bgPic)
{
    this->bgPic=bgPic;
    this->update();
}

Scene::~Scene()
{

}
