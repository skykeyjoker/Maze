#ifndef WALLS_H
#define WALLS_H
#include <QString>

class Walls
{
public:
    Walls(QString type = "");
    QString getType();
private:
    QString type;
};

#endif // WALLS_H
