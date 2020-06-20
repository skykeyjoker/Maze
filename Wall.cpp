#include "Wall.h"
#include "walls.h"

Wall::Wall(Walls walls,Point loc, QWidget *parent):
    Obj(parent)
{
    this->type = walls;
    this->loc = loc;
    this->setPic(this->type.getType());
}

Walls Wall:: getType(){return this->type;}

void Wall::setType(Walls t){
    this->type=t;
    this->setPic(t.type);
}
