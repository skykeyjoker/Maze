#ifndef POINT_H
#define POINT_H


class Point
{
public:
    Point(int x=0,int y=0);
    Point(const Point &p);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    int x;
    int y;
};

#endif // POINT_H
