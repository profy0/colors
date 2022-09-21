#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

   /* w.setMinimumHeight(450);
    w.setMaximumHeight(450);
    w.setMinimumWidth(800);
    w.setMaximumWidth(800);*/
    w.show();
    return a.exec();
}
