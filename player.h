#ifndef PLAYER_H
#define PLAYER_H
#include "point.h"
#include "obj.h"

class Player : public Obj
{
    Point loc;
public:
    Player(Point loc, QString pic = "", QWidget *parent = nullptr);
    Point getLoc();
    void setLoc(Point loc);
};

#endif // PLAYER_H
