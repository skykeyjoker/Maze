#include "Maze.h"
#include <QWidget>
#include <QDebug>
using namespace std;
void Maze::setSize(Point size)
{
    this->size.setX(size.getX());
    this->size.setY(size.getY());
}
Point Maze::getStartLoc()
{
	return this->startLoc;
}
Point Maze::getTargetLoc()
{
	return this->targetLoc;
}
void Maze::makeMaze()
{
	srand(time(NULL));
    int x=size.getX();
    int y=size.getY();
	connect.reserve(y);
    walls.resize(y);
	vector<Point>tot;
	tot.reserve(x*y);
	bcj isconnect((x+1)*(y+1));
	for (int i=0;i<y;++i)
	{
		connect[i].reserve(x);
        walls[i].resize(x);
		for (int j=0;j<x;++j)
		{
			Point t(i,j);
			tot.push_back(t);
		}
	}
    random_shuffle(tot.begin(),tot.end());
	vector<int>rd;
	for (int i=0;i<4;++i)
	{
		rd.push_back(i);
	}
	for (std::vector<Point>::iterator i = tot.begin(); i != tot.end(); ++i)
	{
		int id=i->getX()+i->getY()*x;
        random_shuffle(rd.begin(),rd.end());
        for (int j=0;j<=3;++j)
		{
            //qDebug()<<id<<' '<<j<<i->getX()<<' '<<i->getY()<<endl;
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
	for(int i=0;i<y;++i)
	{
		for(int j=0;j<x;++j)
		{
			int ck=0;
			if(!connect[i][j].up)ck+=1;
            if(!connect[i][j].down)ck+=2;
			if(!connect[i][j].left)ck+=4;
			if(!connect[i][j].right)ck+=8;
			Type t;
            //qDebug()<<i<<' '<<j<<' '<<ck<<endl;
            if(ck==0)walls[i][j].type=t.all;
			if(ck==1)walls[i][j].type=t.up;
			if(ck==2)walls[i][j].type=t.down;
			if(ck==3)walls[i][j].type=t.updown;
			if(ck==4)walls[i][j].type=t.left;
			if(ck==5)walls[i][j].type=t.upleft;
			if(ck==6)walls[i][j].type=t.downleft;
			if(ck==7)walls[i][j].type=t.noright;
			if(ck==8)walls[i][j].type=t.right;
			if(ck==9)walls[i][j].type=t.upright;
			if(ck==10)walls[i][j].type=t.downright;
			if(ck==11)walls[i][j].type=t.noleft;
			if(ck==12)walls[i][j].type=t.leftright;
			if(ck==13)walls[i][j].type=t.noleft;
			if(ck==14)walls[i][j].type=t.noup;

		}
    }
}
Maze::Maze(QWidget *parent)
    :Obj(parent)
{

}
