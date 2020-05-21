#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include "scene.h"

class MainScene : public Scene
{
    QString bgPic;
public:
    MainScene(QString bgPic = "");
    void gameStart();
    void endGame();
};

#endif // MAINSCENE_H
