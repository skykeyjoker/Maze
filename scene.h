#ifndef SCENE_H
#define SCENE_H

#include <QWidget>

class Scene : public QWidget
{
    Q_OBJECT
    QString bgPic, title;
public:
    Scene(QWidget *parent = 0,QString bgPic = "",QString title = "");
    ~Scene();

    //绘图事件
    void paintEvent(QPaintEvent *);

    //设置背景
    void setBg(QString bgPic);

    //设置标题
    void setTitle(QString title);
};

#endif // SCENE_H
