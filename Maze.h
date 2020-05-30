#ifndef MAZE_H
#define MAZE_H
#include "Point.h"
#include <vector>
class Maze :extern public Obj
{
public:
	Maze(QWidget &parent,QString pic,Point size, Point startLoc, Point targetLoc,int lvl);
	~Maze();
	void setSize(Point size);
	void makeMaze(int lvl);
	Point getStartLoc();
	Point getTargetLoc();
private:
	Point startLoc,targetLoc,size;
	int lvl;
};
#endif
