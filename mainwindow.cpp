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

