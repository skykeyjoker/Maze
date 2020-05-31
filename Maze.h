#ifndef MAZE_H
#define MAZE_H
#include "Point.h"
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
struct towards
{
	bool up,down,left,right;
}
class Maze :extern public Obj
{
public:
	/*The Maze will be generated in [0,x),[0,y)
	totally x*y squares */
	Maze(QWidget &parent,QString pic,Point size, Point startLoc, Point targetLoc,int lvl);
	~Maze();
	void setSize(Point size);
	void makeMaze(int lvl);
	Point getStartLoc();
	Point getTargetLoc();
private:
	Point startLoc,targetLoc,size;
	int lvl;
	vector<vector<towards> >connect;
};
struct bcj
{
    vector<int>f;
    vector<int>r;
    int sum;
    int find(int n)
    {
        if(f[n]==n)
            return n;
        else
            f[n]=find(f[n]);
        return f[n];
    }
    int add(int x,int y)
    {
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
        sum=n;
        f.reserve(n);
        r.reserve(n);
        for (int i=1;i<=n;i++)
        {
            f[i]=i;
        }
    }
};
#endif
