#include "gamescene.h"
#include "walls.h"
#include "Wall.h"
#include "point.h"
#include "StartPoint.h"
#include "TargetPoint.h"
#include "player.h"
#include "Maze.h"
#include <QKeyEvent>
#include <QDebug>
#include <QObject>

GameScene::GameScene(QString bgPic)
{
    setFixedSize(800,600);
    setParent(0);
    this->bgPic=bgPic;
    this->setBg(bgPic);

    this->player = new Player(Point(0, 0), ":/Resource/slime3jump.gif");
    this->player->setParent(this);
    Maze *maze = new Maze();
    maze->setParent(this);
    maze->makeMaze();
    maze->move(200, 200);
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
