#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setMinimumHeight(410);
    w.setMaximumHeight(410);
    w.setMinimumWidth(700);
    w.setMaximumWidth(700);
    w.show();
    return a.exec();
}
