#include "gamescene.h"
#include "walls.h"
#include "Wall.h"
#include "point.h"

GameScene::GameScene(QString bgPic)
{
    setFixedSize(800,600);
    setParent(0);
    this->bgPic=bgPic;
    this->setBg(bgPic);
    QString down = ":/Resource/walls/down.png",
            downleft = ":/Resource/walls/downleft.png",
            downright = ":/Resource/walls/downright.png",
            left = ":/Resource/walls/left.png",
            leftright = ":/Resource/walls/leftright.png",
            nodown = ":/Resource/walls/nodown.png",
            noleft = ":/Resource/walls/noleft.png",
            noright = ":/Resource/walls/noright.png",
            noup = ":/Resource/walls/noup.png",
            right = ":/Resource/walls/right.png",
            up = ":/Resource/walls/up.png",
            updown = ":/Resource/walls/updown.png",
            upleft = ":/Resource/walls/upleft.png",
            upright = ":/Resource/walls/upright.png";

    Wall *testWall = new Wall(up, Point(0, 0));
    testWall->setParent(this);
    testWall->move(100, 100);
}
