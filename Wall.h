#ifndef WALL_H
#define WALL_H

#include "Obj.h"
#include "Point.h"
#include "Walls.h"

class Wall:public Obj
{
	public:
    Wall(Walls walls = Walls(" "),Point loc = Point(0, 0),QWidget *parent = nullptr);
    Walls getType();
    Point loc;//墙的坐标
    Walls type;//墙的类型
    void setType(Walls t);
};

#endif

