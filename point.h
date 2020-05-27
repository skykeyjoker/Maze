#ifndef POINT_H
#define POINT_H


class point
{
public:
    point(int x,int y);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
private:
    int x;
    int y;
};

#endif // POINT_H
