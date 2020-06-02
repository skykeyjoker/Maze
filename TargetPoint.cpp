#include "TargetPoint.h"
Targetpoint::TargetPoint(QWidget *parent,QString pic,Point loc):
Obj(QWidget *parent)	
{
	this->loc=loc;
	this->setPic(QString pic);
			
}

Point TargetPoint::getLoc()
{
	return this->loc;
}

void TargetPoint::setLoc(Point loc)
{
	this->loc=loc;
}
