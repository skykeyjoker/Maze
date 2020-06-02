#ifndef TARGETPOINT_H
#define TARGETPOINT_H
#include "Obj.h"
#include "Point.h"

class TargetPoint:public Obj
{
	private:
	Point loc;
	public:
	TargetPoint(QWidget *parent,QString pic,Point loc);
	Point getLoc();
	void setLoc(Point loc);
		
};

#endif
