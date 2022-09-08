#include "widget.h"

widget::widget(QWidget *parent) : QWidget(parent)
{
    color = Qt::white;
}

void widget::paintEvent(QPaintEvent *)
{
   /* QPainter painter;
    painter.begin(this);
    painter.setBrush(color);
    painter.drawPolygon(QPolygon()<<QPoint(0, 0)<<QPoint(0, width())<<QPoint(height(), width())<<QPoint(height(), 0));
    painter.end();*/
}
