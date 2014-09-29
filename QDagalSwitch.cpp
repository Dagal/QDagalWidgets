﻿#include "QDagalSwitch.h"

QDagalSwitch::QDagalSwitch(QWidget *parent) :
	QWidget(parent),
	m_value(0)
{
	setMinimumWidth(26);
	setMinimumHeight(46);
}

void QDagalSwitch::paintEvent(QPaintEvent* event)
{
	Q_UNUSED(event);

	int centerX = width() / 2;
	int centerY = height() / 2;
	int largeur = (width() < centerY)?(width() - 6):((height() - 6) / 2);
	int hauteur = largeur * 2;

	QPainter painter(this);
	QPen pen;
	pen.setColor(Qt::black);
	pen.setWidth(1);
	painter.setPen(pen);
	QBrush brush(Qt::SolidPattern);
	brush.setColor(Qt::gray);
	painter.setBrush(brush);
	painter.drawRoundedRect(centerX - largeur / 2,
													centerY - hauteur / 2,
													largeur,
													hauteur,
													largeur / 2,
													largeur / 2);

	painter.drawEllipse(centerX - largeur * 0.4,
											centerY + largeur * (m_value == 0)?0.1:-0.9,
											largeur * 0.8,
											largeur * 0.8);
}

int QDagalSwitch::value() const
{
	return m_value;
}

void QDagalSwitch::setValue(int value)
{
	int tmp = value;
	if (tmp < 64)
		tmp = 0;
	else
		tmp = 127;
	if (tmp != m_value)
	{
		m_value = tmp;
		emit(valueChanged(tmp));
		update();
	}
}

