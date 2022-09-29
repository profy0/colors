/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *rgbLabel;
    QLineEdit *rgb1;
    QLineEdit *rgb2;
    QLineEdit *rgb3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *hsvLabel;
    QLineEdit *hsv1;
    QLineEdit *hsv2;
    QLineEdit *hsv3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *hlsLabel;
    QLineEdit *hls1;
    QLineEdit *hls2;
    QLineEdit *hls3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *xyzLabel;
    QLineEdit *xyz1;
    QLineEdit *xyz2;
    QLineEdit *xyz3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labLabel;
    QLineEdit *lab1;
    QLineEdit *lab2;
    QLineEdit *lab3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *cmykLabel;
    QLineEdit *cmyk1;
    QLineEdit *cmyk2;
    QLineEdit *cmyk3;
    QLineEdit *cmyk4;
    QWidget *verticalLayoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QCheckBox *cmyk;
    QCheckBox *lab;
    QCheckBox *xyz;
    QCheckBox *hsl;
    QCheckBox *hsv;
    QCheckBox *rgb;
    QPushButton *chooseColorButton;
    QLabel *warning;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 450);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(350, 10, 421, 311));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rgbLabel = new QLabel(layoutWidget);
        rgbLabel->setObjectName(QString::fromUtf8("rgbLabel"));

        horizontalLayout->addWidget(rgbLabel);

        rgb1 = new QLineEdit(layoutWidget);
        rgb1->setObjectName(QString::fromUtf8("rgb1"));

        horizontalLayout->addWidget(rgb1);

        rgb2 = new QLineEdit(layoutWidget);
        rgb2->setObjectName(QString::fromUtf8("rgb2"));

        horizontalLayout->addWidget(rgb2);

        rgb3 = new QLineEdit(layoutWidget);
        rgb3->setObjectName(QString::fromUtf8("rgb3"));

        horizontalLayout->addWidget(rgb3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        hsvLabel = new QLabel(layoutWidget);
        hsvLabel->setObjectName(QString::fromUtf8("hsvLabel"));
        hsvLabel->setEnabled(true);

        horizontalLayout_3->addWidget(hsvLabel);

        hsv1 = new QLineEdit(layoutWidget);
        hsv1->setObjectName(QString::fromUtf8("hsv1"));

        horizontalLayout_3->addWidget(hsv1);

        hsv2 = new QLineEdit(layoutWidget);
        hsv2->setObjectName(QString::fromUtf8("hsv2"));

        horizontalLayout_3->addWidget(hsv2);

        hsv3 = new QLineEdit(layoutWidget);
        hsv3->setObjectName(QString::fromUtf8("hsv3"));

        horizontalLayout_3->addWidget(hsv3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        hlsLabel = new QLabel(layoutWidget);
        hlsLabel->setObjectName(QString::fromUtf8("hlsLabel"));

        horizontalLayout_6->addWidget(hlsLabel);

        hls1 = new QLineEdit(layoutWidget);
        hls1->setObjectName(QString::fromUtf8("hls1"));

        horizontalLayout_6->addWidget(hls1);

        hls2 = new QLineEdit(layoutWidget);
        hls2->setObjectName(QString::fromUtf8("hls2"));

        horizontalLayout_6->addWidget(hls2);

        hls3 = new QLineEdit(layoutWidget);
        hls3->setObjectName(QString::fromUtf8("hls3"));

        horizontalLayout_6->addWidget(hls3);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        xyzLabel = new QLabel(layoutWidget);
        xyzLabel->setObjectName(QString::fromUtf8("xyzLabel"));

        horizontalLayout_5->addWidget(xyzLabel);

        xyz1 = new QLineEdit(layoutWidget);
        xyz1->setObjectName(QString::fromUtf8("xyz1"));
        xyz1->setEnabled(true);

        horizontalLayout_5->addWidget(xyz1);

        xyz2 = new QLineEdit(layoutWidget);
        xyz2->setObjectName(QString::fromUtf8("xyz2"));
        xyz2->setEnabled(true);

        horizontalLayout_5->addWidget(xyz2);

        xyz3 = new QLineEdit(layoutWidget);
        xyz3->setObjectName(QString::fromUtf8("xyz3"));
        xyz3->setEnabled(true);

        horizontalLayout_5->addWidget(xyz3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labLabel = new QLabel(layoutWidget);
        labLabel->setObjectName(QString::fromUtf8("labLabel"));

        horizontalLayout_4->addWidget(labLabel);

        lab1 = new QLineEdit(layoutWidget);
        lab1->setObjectName(QString::fromUtf8("lab1"));
        lab1->setEnabled(true);

        horizontalLayout_4->addWidget(lab1);

        lab2 = new QLineEdit(layoutWidget);
        lab2->setObjectName(QString::fromUtf8("lab2"));
        lab2->setEnabled(true);

        horizontalLayout_4->addWidget(lab2);

        lab3 = new QLineEdit(layoutWidget);
        lab3->setObjectName(QString::fromUtf8("lab3"));
        lab3->setEnabled(true);

        horizontalLayout_4->addWidget(lab3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cmykLabel = new QLabel(layoutWidget);
        cmykLabel->setObjectName(QString::fromUtf8("cmykLabel"));

        horizontalLayout_2->addWidget(cmykLabel);

        cmyk1 = new QLineEdit(layoutWidget);
        cmyk1->setObjectName(QString::fromUtf8("cmyk1"));

        horizontalLayout_2->addWidget(cmyk1);

        cmyk2 = new QLineEdit(layoutWidget);
        cmyk2->setObjectName(QString::fromUtf8("cmyk2"));

        horizontalLayout_2->addWidget(cmyk2);

        cmyk3 = new QLineEdit(layoutWidget);
        cmyk3->setObjectName(QString::fromUtf8("cmyk3"));

        horizontalLayout_2->addWidget(cmyk3);

        cmyk4 = new QLineEdit(layoutWidget);
        cmyk4->setObjectName(QString::fromUtf8("cmyk4"));

        horizontalLayout_2->addWidget(cmyk4);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 350, 621, 91));
        horizontalLayout_7 = new QHBoxLayout(verticalLayoutWidget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label);

        cmyk = new QCheckBox(verticalLayoutWidget);
        cmyk->setObjectName(QString::fromUtf8("cmyk"));
        cmyk->setChecked(false);
        cmyk->setTristate(false);

        horizontalLayout_7->addWidget(cmyk);

        lab = new QCheckBox(verticalLayoutWidget);
        lab->setObjectName(QString::fromUtf8("lab"));

        horizontalLayout_7->addWidget(lab);

        xyz = new QCheckBox(verticalLayoutWidget);
        xyz->setObjectName(QString::fromUtf8("xyz"));

        horizontalLayout_7->addWidget(xyz);

        hsl = new QCheckBox(verticalLayoutWidget);
        hsl->setObjectName(QString::fromUtf8("hsl"));
        hsl->setEnabled(true);

        horizontalLayout_7->addWidget(hsl);

        hsv = new QCheckBox(verticalLayoutWidget);
        hsv->setObjectName(QString::fromUtf8("hsv"));

        horizontalLayout_7->addWidget(hsv);

        rgb = new QCheckBox(verticalLayoutWidget);
        rgb->setObjectName(QString::fromUtf8("rgb"));

        horizontalLayout_7->addWidget(rgb);

        chooseColorButton = new QPushButton(centralwidget);
        chooseColorButton->setObjectName(QString::fromUtf8("chooseColorButton"));
        chooseColorButton->setGeometry(QRect(50, 310, 231, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(chooseColorButton->sizePolicy().hasHeightForWidth());
        chooseColorButton->setSizePolicy(sizePolicy2);
        warning = new QLabel(centralwidget);
        warning->setObjectName(QString::fromUtf8("warning"));
        warning->setGeometry(QRect(350, 320, 421, 16));
        QFont font;
        font.setPointSize(7);
        warning->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 5, 421, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(22, 153, 16, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 153, 16, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Colors", nullptr));
        rgbLabel->setText(QCoreApplication::translate("MainWindow", "RGB:", nullptr));
        rgb1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        rgb2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        rgb3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        hsvLabel->setText(QCoreApplication::translate("MainWindow", "HSV:", nullptr));
        hsv1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        hsv2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        hsv3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        hlsLabel->setText(QCoreApplication::translate("MainWindow", "HSL:", nullptr));
        hls1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        hls2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        hls3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        xyzLabel->setText(QCoreApplication::translate("MainWindow", "XYZ:", nullptr));
        xyz1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        xyz2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        xyz3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labLabel->setText(QCoreApplication::translate("MainWindow", "LAB:", nullptr));
        lab1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lab2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lab3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        cmykLabel->setText(QCoreApplication::translate("MainWindow", "CMYK:", nullptr));
        cmyk1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        cmyk2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        cmyk3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        cmyk4->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Menu:", nullptr));
        cmyk->setText(QCoreApplication::translate("MainWindow", "CMYK", nullptr));
        lab->setText(QCoreApplication::translate("MainWindow", "LAB", nullptr));
        xyz->setText(QCoreApplication::translate("MainWindow", "XYZ", nullptr));
        hsl->setText(QCoreApplication::translate("MainWindow", "HSL", nullptr));
        hsv->setText(QCoreApplication::translate("MainWindow", "HSV", nullptr));
        rgb->setText(QCoreApplication::translate("MainWindow", "RGB", nullptr));
        chooseColorButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        warning->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Selected models: ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
