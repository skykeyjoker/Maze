#ifndef OBJ_H
#define OBJ_H

#include <QWidget>

class Obj : public QWidget
{
    Q_OBJECT
    QString pic;
    int sizeH,sizeW;
public:
    explicit Obj(QWidget *parent = nullptr);

    //绘图事件
    void paintEvent(QPaintEvent *);

    //设置图片
    void setPic(QString pic);
signals:

public slots:
};

#endif // OBJ_H
