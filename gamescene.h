#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QWidget>
#include "scene.h"
#include "player.h"
#include "Wall.h"

class GameScene : public Scene
{
    QString bgPic;
public:
    GameScene(QString bgPic = "");
    Player *player;
    Wall ***w;
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
protected:
    void keyPressEvent(QKeyEvent *);
};

#endif // GAMESCENE_H
