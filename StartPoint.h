#ifndef STARTPOINT_H
#define STARTPOINT_H
#include "Obj.h"
#include "Point.h"

class StartPoint:public Obj
{
private:
    Point loc;
public:
	StartPoint(QWidget *parent,QString pic,Point loc);
	Point getLoc();
	void setLoc(Point loc);
		
};

#endif
