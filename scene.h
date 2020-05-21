#ifndef SCENE_H
#define SCENE_H

#include <QWidget>

class Scene : public QWidget
{
    Q_OBJECT
    QString bgPic;
public:
    Scene(QWidget *parent = 0,QString bgPic = "");
    ~Scene();

    //绘图事件
    void paintEvent(QPaintEvent *);
    void setBg(QString bgPic);
};

#endif // SCENE_H
