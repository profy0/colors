#include "widget.h"

widget::widget(QWidget *parent) : QWidget(parent)
{
    color = Qt::white;

}

void widget::paintEvent(QPaintEvent *)
{

    QPainter p;
    p.begin(this);
    p.setPen(QColor(75,75,75));
    QLinearGradient gradient(0,0,height(), width());
    gradient.setColorAt(0.0, Qt::white);
    gradient.setColorAt(1.0, color);
    p.setBrush(gradient);
    p.drawPolygon(QPolygon()<<QPoint(0, 0)<<QPoint(0, width())<<QPoint(height(), width())<<QPoint(height(), 0));
    p.end();

}
