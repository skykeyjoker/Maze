#include "TargetPoint.h"
TargetPoint::TargetPoint(QWidget *parent,QString pic,Point loc):
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
