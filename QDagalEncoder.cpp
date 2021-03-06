﻿#include "QDagalEncoder.h"

#include <math.h>

QDagalEncoder::QDagalEncoder(QWidget *parent) :
	QAbstractSlider(parent)
{
	setValue(0);
	setMinimum(0);
	setMaximum(127);
	setMinimumWidth(30);
	setMinimumHeight(30);
}

void QDagalEncoder::paintEvent(QPaintEvent *event)
{
	Q_UNUSED(event);

	float centerX = width() / 2.0;
	float centerY = height() / 2.0;
	float minSize;
	if (width() < height())
		minSize = width();
	else
		minSize = height();
	float radius = (minSize - 6.0) / 2.0;

	QPainter painter(this);

	QPen pen;
	pen.setColor(Qt::black);
	pen.setWidth(3);
	painter.setPen(pen);

	QBrush brush(Qt::SolidPattern);
	brush.setColor(Qt::gray);
	painter.setBrush(brush);
	painter.drawEllipse(centerX - radius, centerY - radius,
											radius * 2.0, radius * 2.0);

	painter.drawEllipse(centerX - radius / 2.0, centerY - radius / 2.0,
											radius, radius);

	float angle = -(0.0 + value() - minimum())/(0.0 + maximum() - minimum()) * 7.0 * M_PI_4 - M_PI_4/2.0;
	float x;

	for (x = 0.0; x < 2.0 * M_PI; x += M_PI_4 / 2.0)
	{
		pen.setWidth(1);
		painter.setPen(pen);
		painter.drawLine(centerX + radius / 2.0 * sin(x + angle),
										 centerY + radius / 2.0 * cos(x + angle),
										 centerX + radius * sin(x + angle),
										 centerY + radius * cos(x + angle));
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
