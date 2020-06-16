#include "StartPoint.h"
StartPoint::StartPoint(QWidget *parent,QString pic,Point loc):
    Obj(parent)
{
	this->loc=loc;	
    this->setPic(pic);
}

Point StartPoint::getLoc()
{
	return this->loc;
}

void StartPoint::setLoc(Point loc)
{
	this->loc=loc;
}
