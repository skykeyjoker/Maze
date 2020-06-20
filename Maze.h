#ifndef MAZE_H
#define MAZE_H
#include "Point.h"
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <QWidget>
#include <obj.h>
#include<wall.h>
#include<QDebug>
using namespace std;
struct towards
{
	bool up,down,left,right;
};
class Maze :public Obj
{
public:
	/*The Maze will be generated in [0,x),[0,y)
	totally x*y squares */
    Maze(QWidget *parent=nullptr);
	void setSize(Point size);
    void makeMaze();
	Point getStartLoc();
	Point getTargetLoc();
    // vector<vector<Walls> >walls;
    Walls walls[30][30];
private:
    Point startLoc,targetLoc,size;
	int lvl;
	// vector<vector<towards> >is_connected;
    towards is_connected[30][30];
};
struct bcj
{
    // vector<int>f;
    // vector<int>r;
    int f[1000],r[1000];
    int sum;
    int tot;
    int find(int n)
    {
        if(n>tot)return 0;
        if(f[n]==n)
            return n;
        else
            f[n]=find(f[n]);
        return f[n];
    }
    int add(int x,int y)
    {
        //qDebug()<<"is_connected:"<<x<<' '<<y<<endl;
        if(x>tot||y>tot)return 0;
        int a=find(x);
        int b=find(y);
        if(a==b)
            return 0;
        else if(r[a]<=r[b])
        {
            f[a]=b;
            r[b]==r[a]?r[b]++:1;
        }
        else
        {
            f[b]=a;
            r[b]==r[a]?r[a]++:1;
        }
        sum--;
        return 1;
    }
    bcj(int n)
    {
        tot=sum=n;
        // f.reserve(n);
        // r.reserve(n);
        for (int i=0;i<n;i++)
        {
            f[i]=i;
        }
    }
};
#endif
