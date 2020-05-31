#include "Maze.h"
using namespace std;
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
	srand(time(NULL));
	this->startLoc=startLoc;
	this->targetLoc=targetLoc;
	this->lvl=lvl;
	this->size=size;
	int x=size.getX();
	int y=size.getY();
	connect.reserve(y);
	vector<Point>tot;
	tot.reserve(x*y);
	bcj isconnect(x*y);
	for (int i=0;i<y;++i)
	{
		connect[y].reserve(x);
		for (int j=0;j<x;++j)
		{
			Point t(i,j);
			tot.push_back(t);
		}
	}
	shuffle(tot.begin(),tot.end());
	vector<int>rd(4);
	for (int i=0;i<4;++i)
	{
		rd.push_back(i);
	}
	for (std::vector<Point>::iterator i = tot.begin(); i != tot.end(); ++i)
	{
		int id=i->getX()+i->getY()*x;
		shuffle(rd.begin(),rd.end());
		for (int j=0;j<3;++j)
		{
			if(rd[j]==0)
			{
				if(i->getY()==0)continue;
				if(isconnect.find(id)==isconnect.find(id-x))continue;
				connect[i->getY()][i->getX()].up=true;
				connect[i->getY()-1][i->getX()].down=true;
				isconnect.add(id,id-x);
				break;
			}
			if(rd[j]==1)
			{
				if(i->getY()==y-1)continue;
				if(isconnect.find(id)==isconnect.find(id+x))continue;
				connect[i->getY()][i->getX()].down=true;
				connect[i->getY()+1][i->getX()].up=true;
				isconnect.add(id,id+x);
				break;
			}
			if(rd[j]==2)
			{
				if(i->getX()==0)continue;
				if(isconnect.find(id)==isconnect.find(id-1))continue;
				connect[i->getY()][i->getX()].left=true;
				connect[i->getY()][i->getX()-1].right=true;
				isconnect.add(id,id-1);
				break;
			}
			if(rd[j]==3)
			{
				if(i->getX()==x-1)continue;
				if(isconnect.find(id)==isconnect.find(id+1))continue;
				connect[i->getY()][i->getX()].right=true;
				connect[i->getY()][i->getX()+1].left=true;
				isconnect.add(id,id+1);
				break;
			}
		}
	}
	//todo
}
