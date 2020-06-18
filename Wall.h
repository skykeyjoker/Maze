#ifndef WALL_H
#define WALL_H

#include "Obj.h"
#include "Point.h"
#include "Walls.h"

class Wall:public Obj
{
	private:
	Point loc;//墙的坐标 
	Walls type;//墙的类型 
	public:
    Wall(Walls walls,Point loc,QWidget *parent = nullptr);
    Walls getType();
};

#endif

