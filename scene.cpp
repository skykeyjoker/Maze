#include "scene.h"
#include <QPainter>
#include <QDebug>

Scene::Scene(QWidget *parent,QString bgPic,QString title)
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

    //绘制标题
    if(title != ""){
        pix.load(title);
        painter.drawPixmap(150, 40, pix.width()*2, pix.height()*2, pix);
    }
}

void Scene::setBg(QString bgPic)
{
    this->bgPic=bgPic;
    this->update();
}

Scene::~Scene()
{

}

void Scene::setTitle(QString title){
    this->title=title;
    this->update();
}
