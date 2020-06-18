#ifndef POINT_H
#define POINT_H


class Point
{
public:
    Point(int x=0,int y=0);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
private:
    int x;
    int y;
};

#endif // POINT_H
