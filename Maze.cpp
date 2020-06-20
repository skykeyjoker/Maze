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
	// is_connected.reserve(y);
    // walls.resize(y);
	Point tot[1000];
	// tot.reserve(x*y);
	bcj isconnect((x+1)*(y+1));
	for (int i=0;i<y;++i)
	{
		// is_connected[i].reserve(x);
        // walls[i].resize(x);
		for (int j=0;j<x;++j)
		{
			Point t(i,j);
			tot[i*x+j]=t;
			// tot.push_back(t);
		}
	}
    random_shuffle(tot,tot+x*y);
	int rd[4]={0,1,2,3};
    for (int i = 1; i < x*y; ++i)
	{
		int id=tot[i].getX()+tot[i].getY()*x;
        random_shuffle(rd,rd+4);
        for (int j=0;j<=3;++j)
		{
            qDebug()<<id<<' '<<tot[i].getX()<<' '<<tot[i].getY()<<endl;
			if(rd[j]==0)
			{
				if(tot[i].getY()==0)continue;
				if(isconnect.find(id)==isconnect.find(id-x))continue;
				qDebug()<<"up\n";
				is_connected[tot[i].getY()][tot[i].getX()].up=true;
				is_connected[tot[i].getY()-1][tot[i].getX()].down=true;
				isconnect.add(id,id-x);
				break;
			}
			if(rd[j]==1)
			{
				if(tot[i].getY()==y-1)continue;
				if(isconnect.find(id)==isconnect.find(id+x))continue;
				qDebug()<<"down\n";
				is_connected[tot[i].getY()][tot[i].getX()].down=true;
				is_connected[tot[i].getY()+1][tot[i].getX()].up=true;
				isconnect.add(id,id+x);
				break;
			}
			if(rd[j]==2)
			{
				if(tot[i].getX()==0)continue;
				if(isconnect.find(id)==isconnect.find(id-1))continue;
				qDebug()<<"left\n";
				is_connected[tot[i].getY()][tot[i].getX()].left=true;
				is_connected[tot[i].getY()][tot[i].getX()-1].right=true;
				isconnect.add(id,id-1);
				break;
			}
			if(rd[j]==3)
			{
				if(tot[i].getX()==x-1)continue;
				if(isconnect.find(id)==isconnect.find(id+1))continue;
				qDebug()<<"right\n";
				is_connected[tot[i].getY()][tot[i].getX()].right=true;
				is_connected[tot[i].getY()][tot[i].getX()+1].left=true;
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
			if(!is_connected[i][j].up)ck+=1;
            if(!is_connected[i][j].down)ck+=2;
			if(!is_connected[i][j].left)ck+=4;
			if(!is_connected[i][j].right)ck+=8;
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
			if(ck==13)walls[i][j].type=t.nodown;
			if(ck==14)walls[i][j].type=t.noup;

		}
    }
}
Maze::Maze(QWidget *parent)
    :Obj(parent)
{

}

Point Maze::getSize(){
    return this->size;
}
