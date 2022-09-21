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

    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setFixedSize(800, 450);

    ui->chooseColorButton->setText("Choose color");

    howManyLinesDisplayed = 0;

  //  ww = new widget(this);

    //ww->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

  //  ui->paintLayout->addWidget(ww);
  //  ui->chooseColorButton->hide();
   // ui->paintLayout->addWidget(chooseColorButton, 1);

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

    ui->hsv1->hide();
    ui->hsv2->hide();
    ui->hsv3->hide();
    ui->hsvLabel->hide();

    ui->hls1->hide();
    ui->hls2->hide();
    ui->hls3->hide();
    ui->hlsLabel->hide();

    ui->xyz1->hide();
    ui->xyz2->hide();
    ui->xyz3->hide();
    ui->xyzLabel->hide();

    ui->lab1->hide();
    ui->lab2->hide();
    ui->lab3->hide();
    ui->labLabel->hide();

    ui->cmyk1->hide();
    ui->cmyk2->hide();
    ui->cmyk3->hide();
    ui->cmyk4->hide();
    ui->cmykLabel->hide();

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

    ui->xyz1->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");
    ui->xyz2->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");
    ui->xyz3->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");

    ui->lab1->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");
    ui->lab2->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");
    ui->lab3->setStyleSheet("QLineEdit { color: rgb(255,255,255); background-color: rgb(75, 75, 75); border: 1px solid rgb(75,75,75)}");

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

    color = Qt::red;
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

void MainWindow::paintEvent(QPaintEvent *) {
    QPainter p;
    p.begin(this);
    p.setPen(QColor(75,75,75));
    QLinearGradient gradient(0,0,0,315);
    gradient.setColorAt(0.0, Qt::white);
    gradient.setColorAt(0.5, color);
    gradient.setColorAt(1.0, Qt::black);
    p.setBrush(gradient);
    p.drawPolygon(QPolygon()<<QPoint(30, 30)<<QPoint(30, 300)<<QPoint(300, 300)<<QPoint(300,30));
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



void MainWindow::on_cmyk_stateChanged(int arg1)
{
    if(ui->cmyk->isChecked()) {
        ui->cmyk1->show();
        ui->cmyk2->show();
        ui->cmyk3->show();
        ui->cmyk4->show();
        ui->cmykLabel->show();
    } else {
        ui->cmyk1->hide();
        ui->cmyk2->hide();
        ui->cmyk3->hide();
        ui->cmyk4->hide();
        ui->cmykLabel->hide();
    }
}



void MainWindow::on_lab_stateChanged(int arg1)
{
    if(ui->lab->isChecked()) {
        ui->lab1->show();
        ui->lab2->show();
        ui->lab3->show();
        ui->labLabel->show();
    } else {
        ui->lab1->hide();
        ui->lab2->hide();
        ui->lab3->hide();
        ui->labLabel->hide();
    }
}

void MainWindow::on_xyz_stateChanged(int arg1)
{
    if(ui->xyz->isChecked()) {
        ui->xyz1->show();
        ui->xyz2->show();
        ui->xyz3->show();
        ui->xyzLabel->show();
    } else {
        ui->xyz1->hide();
        ui->xyz2->hide();
        ui->xyz3->hide();
        ui->xyzLabel->hide();
    }
}

void MainWindow::on_hsl_stateChanged(int arg1)
{
    if(ui->hsl->isChecked()) {
        ui->hls1->show();
        ui->hls2->show();
        ui->hls3->show();
        ui->hlsLabel->show();
    } else {
        ui->hls1->hide();
        ui->hls2->hide();
        ui->hls3->hide();
        ui->hlsLabel->hide();
    }
}

void MainWindow::on_hsv_stateChanged(int arg1)
{
    if(ui->hsv->isChecked()) {
        ui->hsv1->show();
        ui->hsv2->show();
        ui->hsv3->show();
        ui->hsvLabel->show();
    } else {
        ui->hsv1->hide();
        ui->hsv2->hide();
        ui->hsv3->hide();
        ui->hsvLabel->hide();
    }
}

void MainWindow::on_rgb_stateChanged(int arg1)
{
    if(ui->rgb->isChecked()) {
        ui->rgb1->show();
        ui->rgb2->show();
        ui->rgb3->show();
        ui->rgbLabel->show();
    } else {
        ui->rgb1->hide();
        ui->rgb2->hide();
        ui->rgb3->hide();
        ui->rgbLabel->hide();
    }
}
