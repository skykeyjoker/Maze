#include "TargetPoint.h"
TargetPoint::TargetPoint(Point loc,QString pic,QWidget *parent):
    Obj(parent)
{
	this->loc=loc;
    this->setPic(pic);
			
}

Point TargetPoint::getLoc()
{
	return this->loc;
}

void TargetPoint::setLoc(Point loc)
{
	this->loc=loc;
}
