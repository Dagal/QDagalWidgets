#include "QDagalEncoder.h"

#include <math.h>

QDagalEncoder::QDagalEncoder(QWidget *parent) :
	QAbstractSlider(parent)
{
	setValue(0);
	setMinimum(0);
	setMaximum(127);
	setMinimumWidth(60);
	setMinimumHeight(60);
}

void QDagalEncoder::paintEvent(QPaintEvent *event)
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
	float angle = -(value()-minimum())/(maximum()-minimum())*7.0/M_PI_4 - M_PI_4/2.0;
	float x;
	for (x = 0.0; x < 2 * M_PI; x += M_PI_4 / 2.0)
	{
		painter.drawLine(30.5+((x==0.0)?0:(10*sin(x+angle))), 30.5+((x==0.0)?0:(10*cos(x+angle))),
										 30.5+20*sin(x+angle),30.5+20*cos(x+angle));
	}
}

void QDagalEncoder::setValue(int value)
{
	if (value != QAbstractSlider::value())
	{
		QAbstractSlider::setValue(value);
		update();
	}
}
