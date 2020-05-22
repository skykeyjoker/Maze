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
    void paintEvent(QPaintEvent *);
    void setNormalPic(QString normalPic);
    void setPressPic(QString pressPic);
};

#endif // PUSHBTN_H
