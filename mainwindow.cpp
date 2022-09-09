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
    connect(ui->rgb1, SIGNAL(textChanged(QString)), this, SLOT(recalcRGB()));
    connect(ui->rgb2, SIGNAL(textChanged(QString)), this, SLOT(recalcRGB()));
    connect(ui->rgb3, SIGNAL(textChanged(QString)), this, SLOT(recalcRGB()));
    QString range = "(?:0|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])";
    QRegExp regex ("^" + range + "$");
    QRegExpValidator *valid = new QRegExpValidator(regex, this);
    ui->rgb1->setValidator(valid);
    ui->rgb2->setValidator(valid);
    ui->rgb3->setValidator(valid);
}

void MainWindow::paintEvent(QPaintEvent *) {
    QPainter p;
    p.begin(this);
    p.setBrush(color);
    p.drawPolygon(QPolygon()<<QPoint(20, 20)<<QPoint(20, 200)<<QPoint(200, 200)<<QPoint(200,20));
    p.end();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_chooseColorButton_clicked()
{
    color = QColorDialog::getColor();
    update();
    ui->rgb1->setText(QString::number(color.red()));
    ui->rgb2->setText(QString::number(color.green()));
    ui->rgb3->setText(QString::number(color.blue()));
}

void MainWindow::recalcRGB()
{

    color.setRgb(ui->rgb1->text().toInt(), ui->rgb2->text().toInt(), ui->rgb3->text().toInt());
    update();
  //  qDebug() << "changed";
}

