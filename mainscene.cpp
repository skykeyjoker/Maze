#include "mainscene.h"
#include "pushbtn.h"
#include "gamescene.h"
#include <QWidget>

MainScene::MainScene(QString bgPic)
{
    setFixedSize(800,600);
    setParent(0);
    this->bgPic=bgPic;
    this->setBg(bgPic);
    this->setTitle(":/Resource/name.png");

    //设置窗口的按钮
    //开始按钮
    PushBtn *startBtn = new PushBtn(":/Resource/start2.png",":/Resource/startdown.png");
    startBtn->setParent(this);\
    startBtn->move(200,340);
    //退出按钮
    PushBtn *endBtn = new PushBtn(":/Resource/exit.png",":/Resource/exitdown.png");
    endBtn->setParent(this);
    endBtn->move(450,340);
    connect(endBtn, &QPushButton::clicked, this, &QWidget::close);

    //游戏界面跳转
    GameScene *gameScene = new GameScene(":/Resource/backgroud2.bmp");
    connect(startBtn, &QPushButton::clicked, gameScene, [=](){
        gameScene->move(QPoint(this->x(),this->y()));
        gameScene->show();
        this->hide();
    });
}

void MainScene::gameStart()
{

}

void MainScene::endGame()
{

}
