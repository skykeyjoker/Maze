#include "player.h"
#include <QDebug>

Player::Player(Point loc, QString pic, QWidget *parent):
    Obj(parent)
{
    this->loc = loc;
    this->setPic(pic);
}

Point Player::getLoc()
{
    return this->loc;
}

void Player::setLoc(Point loc)
{
    this->loc=loc;
}
