#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include "widget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void paintEvent(QPaintEvent*) override;

private slots:
    void on_chooseColorButton_clicked();
    void recalcRGB();
    void recalcCMYK();
    void recalcHSV();
    void recalcHLS();

private:
    Ui::MainWindow *ui;
    QColor color;
    widget *ww;
    QPushButton *chooseColorButton;

};
#endif // MAINWINDOW_H
