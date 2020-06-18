#include <QApplication>
#include "scene.h"
#include "mainscene.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainScene w(":/Resource/mainMenu.bmp");
    w.show();

    return a.exec();
}
