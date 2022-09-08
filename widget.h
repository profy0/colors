#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtWidgets>

class widget : public QWidget
{
    Q_OBJECT
public:

    widget(QWidget *parent = 0);
    QColor color;

protected:
    void paintEvent(QPaintEvent *) override;

};

#endif // WIDGET_H
