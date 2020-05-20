#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>

class Scene : public QWidget
{
    Q_OBJECT

public:
    Scene(QWidget *parent = 0);
    ~Scene();
};

#endif // MAINSCENE_H
