#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

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
    void recalcRGB();   // функции пересчета значений для каждой модели
    void recalcCMYK();
    void recalcHSV();
    void recalcHLS();
    void recalcXYZ();
    void recalcLAB();

    std::pair <float, std::pair<float,float> > RGBtoXYZ();
    void XYZtoRGB(float, float, float);
    void LABtoXYZ(float, float, float);
    void XYZtoLAB(float, float, float);

    void on_cmyk_stateChanged(int arg1);

    void on_lab_stateChanged(int arg1);

    void on_xyz_stateChanged(int arg1);

    void on_hsl_stateChanged(int arg1);

    void on_hsv_stateChanged(int arg1);

    void on_rgb_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
    QColor color; // цвет, с которым работает программа
    QPushButton *chooseColorButton; // кнопка выбора цвета

};
#endif // MAINWINDOW_H
