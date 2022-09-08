#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setMinimumHeight(460);
    w.setMaximumHeight(460);
    w.setMinimumWidth(460);
    w.setMaximumWidth(460);
    w.show();
    return a.exec();
}
