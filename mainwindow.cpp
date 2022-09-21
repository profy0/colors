#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->chooseColorButton->setText("Choose color");

  /*  ww = new widget(this);
    ui->verticalLayout->addWidget(ww);
*/
   /* ww = new widget(this);
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(ww);
  //  ui->verticalLayout->addWidget(ww,0,0);

    QPushButton* chooseColorButton = new QPushButton("Choose Color");
    layout->addWidget(chooseColorButton);
    */
  //  connect(chooseColorButton, SIGNAL(clicked()), this, SLOT(on_chooseColorButton_clicked()));
   /* parent->setLayout(layout);
    parent->show();*/
  //  setLayout(layout);



    connect(ui->rgb1, SIGNAL(textEdited(QString)), this, SLOT(recalcRGB()));
    connect(ui->rgb2, SIGNAL(textEdited(QString)), this, SLOT(recalcRGB()));
    connect(ui->rgb3, SIGNAL(textEdited(QString)), this, SLOT(recalcRGB()));
    connect(ui->cmyk1, SIGNAL(textEdited(QString)), this, SLOT(recalcCMYK()));
    connect(ui->cmyk2, SIGNAL(textEdited(QString)), this, SLOT(recalcCMYK()));
    connect(ui->cmyk3, SIGNAL(textEdited(QString)), this, SLOT(recalcCMYK()));
    connect(ui->cmyk4, SIGNAL(textEdited(QString)), this, SLOT(recalcCMYK()));
    connect(ui->hsv1, SIGNAL(textEdited(QString)), this, SLOT(recalcHSV()));
    connect(ui->hsv2, SIGNAL(textEdited(QString)), this, SLOT(recalcHSV()));
    connect(ui->hsv3, SIGNAL(textEdited(QString)), this, SLOT(recalcHSV()));
    connect(ui->hls1, SIGNAL(textEdited(QString)), this, SLOT(recalcHLS()));
    connect(ui->hls2, SIGNAL(textEdited(QString)), this, SLOT(recalcHLS()));
    connect(ui->hls3, SIGNAL(textEdited(QString)), this, SLOT(recalcHLS()));


    ui->rgb1->hide();
    ui->rgb2->hide();
    ui->rgb3->hide();
    ui->rgbLabel->hide();


    ui->rgb1->show();
    ui->rgb2->show();
    ui->rgb3->show();
    ui->rgbLabel->show();


    QString range = "(?:0|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])";
    QString rangeFloat = "(?:0[.][0-9]{1,}|1)";
    QRegExp regex ("^" + range + "$");
    QRegExp regexFloat("^" + rangeFloat + "$");
    QRegExpValidator *valid = new QRegExpValidator(regex, this);
    QRegExpValidator *validFloat = new QRegExpValidator(regexFloat, this);
    ui->rgb1->setValidator(valid);
    ui->rgb2->setValidator(valid);
    ui->rgb3->setValidator(valid);
    ui->hsv1->setValidator(validFloat);
    ui->hsv2->setValidator(validFloat);
    ui->hsv3->setValidator(validFloat);
    ui->hls1->setValidator(validFloat);
    ui->hls2->setValidator(validFloat);
    ui->hls3->setValidator(validFloat);
    ui->cmyk1->setValidator(validFloat);
    ui->cmyk2->setValidator(validFloat);
    ui->cmyk3->setValidator(validFloat);
    ui->cmyk4->setValidator(validFloat);

    ui->chooseColorButton->setStyleSheet("QPushButton { color: rgb(255,255,255); background: rgb(75,75,75); }");

    ui->rgb1->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");
    ui->rgb2->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");
    ui->rgb3->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");

    ui->hsv1->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");
    ui->hsv2->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");
    ui->hsv3->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");

    ui->hls1->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");
    ui->hls2->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");
    ui->hls3->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");

    ui->cmyk1->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");
    ui->cmyk2->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");
    ui->cmyk3->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");
    ui->cmyk4->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");

    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window, QColor(50,50,50));

  //  darkPalette.setColor(QPalette::Base, QColor(52,89,111));
    darkPalette.setColor(QPalette::WindowText, QColor(255,255,255));
 /*   darkPalette.setColor(QPalette::HighlightedText, QColor(255,0,0));
    darkPalette.setColor(QPalette::Highlight, QColor(245,245,245));*/
  //  darkPalette.setColor(QPalette::Base, QColor(52,89,111));
 //   darkPalette.setColor(QPalette::Text, QColor(255,255,255));
 /*   darkPalette.setColor(QPalette::Button, QColor(0,0,0));
    darkPalette.setColor(QPalette::ButtonText, QColor(245,245,245));*/
    this->setPalette(darkPalette);

    //recalcRGB();
}

void MainWindow::paintEvent(QPaintEvent *) {
    QPainter p;
    p.begin(this);
    p.setPen(QColor(75,75,75));
    QLinearGradient gradient(20,20,20,200);
    gradient.setColorAt(0.0, Qt::white);
    gradient.setColorAt(1.0, color);
    p.setBrush(gradient);
    p.drawPolygon(QPolygon()<<QPoint(20, 20)<<QPoint(20, 200)<<QPoint(200, 200)<<QPoint(200,20));
    /*  p.setPen(color);
    p.setBrush(color);
    p.drawPolygon(QPolygon()<<QPoint(20, 20)<<QPoint(20, 200)<<QPoint(200, 200)<<QPoint(200,20));*/



    p.end();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_chooseColorButton_clicked()
{
    color = QColorDialog::getColor();
    ui->rgb1->setText(QString::number(color.red()));
    ui->rgb2->setText(QString::number(color.green()));
    ui->rgb3->setText(QString::number(color.blue()));
    ui->cmyk1->setText(QString::number(color.cyanF()));
    ui->cmyk2->setText(QString::number(color.magentaF()));
    ui->cmyk3->setText(QString::number(color.yellowF()));
    ui->cmyk4->setText(QString::number(color.blackF()));
    ui->hsv1->setText(QString::number(color.hueF()));
    ui->hsv2->setText(QString::number(color.saturationF()));
    ui->hsv3->setText(QString::number(color.valueF()));
    ui->hls1->setText(QString::number(color.hslHueF()));
    ui->hls2->setText(QString::number(color.hslSaturationF()));
    ui->hls3->setText(QString::number(color.lightnessF()));
    update();

}

void MainWindow::recalcRGB()
{

    color.setRgb(ui->rgb1->text().toInt(), ui->rgb2->text().toInt(), ui->rgb3->text().toInt());
    ui->cmyk1->setText(QString::number(color.cyanF()));
    ui->cmyk2->setText(QString::number(color.magentaF()));
    ui->cmyk3->setText(QString::number(color.yellowF()));
    ui->cmyk4->setText(QString::number(color.blackF()));
    ui->hsv1->setText(QString::number(color.hueF()));
    ui->hsv2->setText(QString::number(color.saturationF()));
    ui->hsv3->setText(QString::number(color.valueF()));
    ui->hls1->setText(QString::number(color.hslHueF()));
    ui->hls2->setText(QString::number(color.hslSaturationF()));
    ui->hls3->setText(QString::number(color.lightnessF()));
    update();
    //  qDebug() << "changed";
}

void MainWindow::recalcCMYK()
{
    color.setCmykF(ui->cmyk1->text().toFloat(), ui->cmyk2->text().toFloat(), ui->cmyk3->text().toFloat(), ui->cmyk4->text().toFloat());
    ui->rgb1->setText(QString::number(color.red()));
    ui->rgb2->setText(QString::number(color.green()));
    ui->rgb3->setText(QString::number(color.blue()));
    ui->hsv1->setText(QString::number(color.hueF()));
    ui->hsv2->setText(QString::number(color.saturationF()));
    ui->hsv3->setText(QString::number(color.valueF()));
    ui->hls1->setText(QString::number(color.hslHueF()));
    ui->hls2->setText(QString::number(color.hslSaturationF()));
    ui->hls3->setText(QString::number(color.lightnessF()));
    update();
}

void MainWindow::recalcHSV()
{
    color.setHsvF(ui->hsv1->text().toFloat(), ui->hsv2->text().toFloat(), ui->hsv3->text().toFloat());
    ui->rgb1->setText(QString::number(color.red()));
    ui->rgb2->setText(QString::number(color.green()));
    ui->rgb3->setText(QString::number(color.blue()));
    ui->cmyk1->setText(QString::number(color.cyanF()));
    ui->cmyk2->setText(QString::number(color.magentaF()));
    ui->cmyk3->setText(QString::number(color.yellowF()));
    ui->cmyk4->setText(QString::number(color.blackF()));
    ui->hls1->setText(QString::number(color.hslHueF()));
    ui->hls2->setText(QString::number(color.hslSaturationF()));
    ui->hls3->setText(QString::number(color.lightnessF()));
    update();
}

void MainWindow::recalcHLS()
{
    color.setHslF(ui->hls1->text().toFloat(), ui->hls2->text().toFloat(), ui->hls3->text().toFloat());
    ui->rgb1->setText(QString::number(color.red()));
    ui->rgb2->setText(QString::number(color.green()));
    ui->rgb3->setText(QString::number(color.blue()));
    ui->cmyk1->setText(QString::number(color.cyanF()));
    ui->cmyk2->setText(QString::number(color.magentaF()));
    ui->cmyk3->setText(QString::number(color.yellowF()));
    ui->cmyk4->setText(QString::number(color.blackF()));
    ui->hsv1->setText(QString::number(color.hueF()));
    ui->hsv2->setText(QString::number(color.saturationF()));
    ui->hsv3->setText(QString::number(color.valueF()));
    update();
}


