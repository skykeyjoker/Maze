#include "StartPoint.h"
StartPoint::StartPoint(Point loc,QString pic,QWidget *parent):
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
