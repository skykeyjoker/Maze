#include "StartPoint.h"
Startpoint::StartPoint(QWidget *parent,QString pic,Point loc):
Obj(QWidget *parent)
{
	this->loc=loc;	
	this->setPic(QString pic);
}

Point StartPoint::getLoc()
{
	return this->loc;
}

void StartPoint::setLoc(Point loc)
{
	this->loc=loc;
}
