#ifndef TARGETPOINT_H
#define TARGETPOINT_H
#include "Obj.h"
#include "Point.h"

class TargetPoint:public Obj
{
private:
    Point loc;
public:
    TargetPoint(Point loc, QString pic = "", QWidget *parent = nullptr);
    Point getLoc();
    void setLoc(Point loc);

};

#endif
