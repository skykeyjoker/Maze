#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QWidget>
#include "scene.h"

class GameScene : public Scene
{
    QString bgPic;
public:
    GameScene(QString bgPic = "");
};

#endif // GAMESCENE_H
