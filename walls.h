#ifndef WALLS_H
#define WALLS_H
#include <QString>

struct Type{
    const QString down = ":/Resource/walls/down.png",
                  downleft = ":/Resource/walls/downleft.png",
                  downright = ":/Resource/walls/downright.png",
                  left = ":/Resource/walls/left.png",
                  leftright = ":/Resource/walls/leftright.png",
                  nodown = ":/Resource/walls/nodown.png",
                  noleft = ":/Resource/walls/noleft.png",
                  noright = ":/Resource/walls/noright.png",
                  noup = ":/Resource/walls/noup.png",
                  right = ":/Resource/walls/right.png",
                  up = ":/Resource/walls/up.png",
                  updown = ":/Resource/walls/updown.png",
                  upleft = ":/Resource/walls/upleft.png",
                  upright = ":/Resource/walls/upright.png";
};

class Walls
{
public:
    Walls(QString type = "");
    QString getType();
private:
    QString type;
};

#endif // WALLS_H
