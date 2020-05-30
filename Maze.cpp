#include "Maze.h"
struct towards
{
	bool up,down,left,right;
};
Maze::void setSize(Point size)
{
	this->size=size;
};
Maze:: Point getStartLoc()
{
	return this->startLoc;
};
Maze:: Point getTargetLoc()
{
	return this->targetLoc;
};
Maze::Maze(QWidget &parent,QString pic,Point size, Point startLoc, Point targetLoc,int lvl)
{
	this->startLoc=startLoc;
	this->targetLoc=targetLoc;
	this->lvl=lvl;
	this->size=size;
	//todo
}
