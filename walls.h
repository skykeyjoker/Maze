#ifndef WALLS_H
#define WALLS_H


class Walls
{
public:
    Walls(char* type=nullptr);
    char* getType();
private:
    char* type;
};

#endif // WALLS_H
