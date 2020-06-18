#ifndef STARTPOINT_H
#define STARTPOINT_H
#include "Obj.h"
#include "Point.h"

class StartPoint:public Obj
{
private:
    Point loc;
public:
    StartPoint(Point loc, QString pic = "", QWidget *parent = nullptr);
	Point getLoc();
	void setLoc(Point loc);
		
};

#endif
