#include "mainui.h"
//#include "rotatingstackwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainuicpp w;
    w.show();
    return a.exec();
}
