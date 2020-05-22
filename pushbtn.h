#ifndef PUSHBTN_H
#define PUSHBTN_H

#include <QWidget>
#include <QPushButton>

class PushBtn : public QPushButton
{
    QString normalPic;
    QString pressPic;
public:
    PushBtn(QString normalPic,QString pressPic="");
    void setNormalPic(QString normalPic);
    void setPressPic(QString pressPic);

    //重写鼠标事件
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
};

#endif // PUSHBTN_H
