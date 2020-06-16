#include "Wall.h"
Walls Wall:: getType(){return this->type;} 

Wall::Wall (Qwidget *parent,QString pic,Point loc):
	Obj(QWidget *parent)
{
	this->loc=loc;
	this->setPic(QString pic);;
}


