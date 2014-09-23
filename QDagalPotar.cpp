#include "QDagalPotar.h"

#include <math.h>

QDagalPotar::QDagalPotar(QWidget *parent) :
	QAbstractSlider(parent)
{
	setValue(0);
	setMinimum(0);
	setMaximum(127);
}

void QDagalPotar::paintEvent(QPaintEvent *event)
{
	Q_UNUSED(event);

	QPainter painter(this);
	QPen pen;
	pen.setColor(Qt::blue);
	pen.setWidth(1);
	painter.setPen(pen);
	QBrush brush(Qt::SolidPattern);
	brush.setColor(Qt::white);
	painter.setBrush(brush);
	painter.drawEllipse(5,5,50,50);
	QPen pen2;
	pen2.setColor(Qt::blue);
	pen2.setWidth(3);
	painter.setPen(pen2);
	painter.drawEllipse(20,20,20,20);
	painter.setPen(pen);
	float x;
	for (x = 0.0; x < 6.28;x += 0.3927)
	{
		painter.drawLine(30.5 + ((x==0.0)?0:(10*sin(x))), 30.5 + ((x==0.0)?0:(10*cos(x))),
										 30.5 + 20*sin(x), 30.5 + 20*cos(x));
	}
}

