#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include "scene.h"

class MainScene : public Scene
{
    QString bgPic;
public:
    MainScene(QString bgPic = "");

    //游戏开始事件
    void gameStart();

    //游戏结束事件
    void endGame();
};

#endif // MAINSCENE_H
