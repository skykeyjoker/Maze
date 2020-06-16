#include "Wall.h"
#include "walls.h"

Wall::Wall(Walls walls,Point loc, QWidget *parent):
    Obj(parent)
{
	this->loc=loc;
    this->setPic(pic);
}

Walls Wall:: getType(){return this->type;}


