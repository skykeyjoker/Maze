#include "gamescene.h"
#include "walls.h"
#include "Wall.h"
#include "point.h"
#include "StartPoint.h"
#include "TargetPoint.h"
#include "player.h"
#include <QKeyEvent>
#include <QDebug>
#include <QObject>

GameScene::GameScene(QString bgPic)
{
    setFixedSize(800,600);
    setParent(0);
    this->bgPic=bgPic;
    this->setBg(bgPic);
    QString down = ":/Resource/walls/down.png",
            downleft = ":/Resource/walls/downleft.png",
            downright = ":/Resource/walls/downright.png",
            left = ":/Resource/walls/left.png",
            leftright = ":/Resource/walls/leftright.png",
            nodown = ":/Resource/walls/nodown.png",
            noleft = ":/Resource/walls/noleft.png",
            noright = ":/Resource/walls/noright.png",
            noup = ":/Resource/walls/noup.png",
            right = ":/Resource/walls/right.png",
            up = ":/Resource/walls/up.png",
            updown = ":/Resource/walls/updown.png",
            upleft = ":/Resource/walls/upleft.png",
            upright = ":/Resource/walls/upright.png";

    TargetPoint *targetPoint = new TargetPoint(Point(0, 0), ":/Resource/trophy.png");
    targetPoint->setParent(this);
    targetPoint->move(100, 100);

    this->player = new Player(Point(0, 0), ":/Resource/slime3jump.gif");
    this->player->setParent(this);
}

void GameScene::keyPressEvent(QKeyEvent *e){
    if(e->key()==Qt::Key_Left || e->key()==Qt::Key_A) GameScene::moveLeft();
    if(e->key()==Qt::Key_Right || e->key()==Qt::Key_D) GameScene::moveRight();
    if(e->key()==Qt::Key_Up || e->key()==Qt::Key_W) GameScene::moveUp();
    if(e->key()==Qt::Key_Down || e->key()==Qt::Key_S) GameScene::moveDown();
}

void GameScene::moveUp(){
    int x=this->player->getLoc().getX(), y=this->player->getLoc().getY();
    if(y>=0) this->player->setLoc(Point(x, y-1));
}

void GameScene::moveDown(){
    int x=this->player->getLoc().getX(), y=this->player->getLoc().getY();
    if(1) this->player->setLoc(Point(x, y+1));
}

void GameScene::moveLeft(){
    int x=this->player->getLoc().getX(), y=this->player->getLoc().getY();
    if(x>=0) this->player->setLoc(Point(x-1, y));
}

void GameScene::moveRight(){
    int x=this->player->getLoc().getX(), y=this->player->getLoc().getY();
    if(1) this->player->setLoc(Point(x+1, y));
}
