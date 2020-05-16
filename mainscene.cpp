#include "mainscene.h"

MainScene::MainScene(QWidget *parent)
    : QWidget(parent)
{
    //配置窗口

    //设置固定大小
    setFixedSize(800,600);

    //设置标题
    setWindowTitle("Maze");
}

MainScene::~MainScene()
{

}
