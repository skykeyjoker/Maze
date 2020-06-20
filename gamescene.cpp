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
    Maze *maze = new Maze();
    maze->setSize(Point(8, 8));
    maze->makeMaze();
    maze->setParent(this);
    maze->move(200, 100);
    player->setParent(maze);
    TargetPoint *tg = new TargetPoint(Point(maze->getSize().x, maze->getSize().y),":/Resource/trophy.png");
    tg->setParent(maze);
    tg->move(50*(maze->getSize().x - 1),50*(maze->getSize().y - 1));
    w = new Wall**[maze->getSize().getY()];
    for (int i=0;i<maze->getSize().getY();++i){
        w[i] = new Wall*[maze->getSize().getX()];
        for (int j=0;j<maze->getSize().getX();++j){
           qDebug()<<i<<j<<maze->walls[i][j].getType();
           w[i][j] = new Wall();
           w[i][j]->setPic(maze->walls[i][j].getType());
           w[i][j]->setType(maze->walls[i][j]);
           w[i][j]->setParent(maze);
           w[i][j]->move(i*50,j*50);
        }
    }
}

void GameScene::keyPressEvent(QKeyEvent *e){
    if(e->key()==Qt::Key_Left || e->key()==Qt::Key_A) GameScene::moveLeft();
    if(e->key()==Qt::Key_Right || e->key()==Qt::Key_D) GameScene::moveRight();
    if(e->key()==Qt::Key_Up || e->key()==Qt::Key_W) GameScene::moveUp();
    if(e->key()==Qt::Key_Down || e->key()==Qt::Key_S) GameScene::moveDown();
    this->player->move(this->player->getLoc().x*50, this->player->getLoc().y*50);
}

void GameScene::moveUp(){
    Type cc;
    int x=this->player->getLoc().getX(), y=this->player->getLoc().getY();
    qDebug()<<w[x][y]->getType().type;
    if(y>0
            && w[x][y]->getType().type!=cc.up && w[x][y]->getType().type!=cc.updown && w[x][y]->getType().type!=cc.upright
            && w[x][y]->getType().type!=cc.upleft && w[x][y]->getType().type!=cc.noright  && w[x][y]->getType().type!=cc.noleft && w[x][y]->getType().type!=cc.nodown
            )
        this->player->setLoc(Point(x, y-1));
}

void GameScene::moveDown(){
    Type cc;
    int x=this->player->getLoc().getX(), y=this->player->getLoc().getY();
    qDebug()<<w[x][y]->getType().type;
    if(y<7
            && w[x][y]->getType().type!=cc.down && w[x][y]->getType().type!=cc.updown && w[x][y]->getType().type!=cc.downright
            && w[x][y]->getType().type!=cc.downleft && w[x][y]->getType().type!=cc.noright  && w[x][y]->getType().type!=cc.noleft && w[x][y]->getType().type!=cc.noup
            )
        this->player->setLoc(Point(x, y+1));
}

void GameScene::moveLeft(){
    Type cc;
    int x=this->player->getLoc().getX(), y=this->player->getLoc().getY();
    qDebug()<<w[x][y]->getType().type;
    if(x>0
            && w[x][y]->getType().type!=cc.left && w[x][y]->getType().type!=cc.leftright && w[x][y]->getType().type!=cc.upleft
           && w[x][y]->getType().type!=cc.downleft && w[x][y]->getType().type!=cc.noup  && w[x][y]->getType().type!=cc.noright && w[x][y]->getType().type!=cc.nodown
            )
        this->player->setLoc(Point(x-1, y));
}

void GameScene::moveRight(){
    Type cc;
    int x=this->player->getLoc().getX(), y=this->player->getLoc().getY();
    qDebug()<<w[x][y]->getType().type;
    if(x<7
            && w[x][y]->getType().type!=cc.right && w[x][y]->getType().type!=cc.leftright && w[x][y]->getType().type!=cc.upright
            && w[x][y]->getType().type!=cc.downright && w[x][y]->getType().type!=cc.noup  && w[x][y]->getType().type!=cc.noleft && w[x][y]->getType().type!=cc.nodown
            )
        this->player->setLoc(Point(x+1, y));
}
