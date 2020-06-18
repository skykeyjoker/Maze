#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QWidget>
#include "scene.h"
#include "player.h"

class GameScene : public Scene
{
    QString bgPic;
public:
    GameScene(QString bgPic = "");
    Player *player;
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
protected:
    void keyPressEvent(QKeyEvent *);
};

#endif // GAMESCENE_H
