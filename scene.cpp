#include "scene.h"

Scene::Scene(QWidget *parent)
    : QWidget(parent)
{
    //配置窗口

    //设置固定大小
    setFixedSize(800,600);

    //设置标题test
    setWindowTitle("Maze");
}

Scene::~Scene()
{

}
