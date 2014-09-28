#include "QDagalFader.h"

QDagalFader::QDagalFader(QWidget *parent) :
	QWidget(parent),
	m_value(0)
{
	setMinimumWidth(27);
	setMinimumHeight(16);
}

int QDagalFader::value() const
{
	return m_value;
}

void QDagalFader::paintEvent(QPaintEvent *event)
{
	Q_UNUSED(event);

	int centerX = width() / 2;

	QPen pen;
	pen.setColor(Qt::gray);
	pen.setWidth(3);
	QBrush brush(Qt::SolidPattern);
	brush.setColor(Qt::black);

	QPainter painter(this);
	painter.setPen(pen);
	painter.setBrush(brush);
	painter.drawRect(centerX - 2,
									 4,
									 5,
									 height() - 8);

	pen.setColor(Qt::black);
	pen.setWidth(1);
	painter.setPen(pen);
	brush.setColor(Qt::gray);
	painter.setBrush(brush);
	int cursorHeight = height() - 6;
	int cursorValue = m_value * (cursorHeight - 6) / 127;
	painter.drawRect(centerX - 13,
									 cursorHeight - cursorValue - 5,
									 27,
									 10);
	painter.drawRect(centerX - 3,
									 cursorHeight - cursorValue - 2,
									 7,
									 4);
	painter.drawLine(centerX - 13,
									 cursorHeight - cursorValue - 4,
									 centerX - 3,
									 cursorHeight - cursorValue - 2);
	painter.drawLine(centerX - 13,
									 cursorHeight - cursorValue + 5,
									 centerX - 3,
									 cursorHeight - cursorValue + 2);
	painter.drawLine(centerX + 14,
									 cursorHeight - cursorValue - 4,
									 centerX + 3,
									 cursorHeight - cursorValue - 2);
	painter.drawLine(centerX + 14,
									 cursorHeight - cursorValue + 5,
									 centerX + 3,
									 cursorHeight - cursorValue + 2);
	painter.drawLine(centerX - 3,
									 cursorHeight - cursorValue,
									 centerX + 4,
									 cursorHeight - cursorValue);
}

void QDagalFader::setValue(int value)
{
	int tmp = value;
	if (tmp < 0) tmp = 0;
	if (tmp > 127) tmp = 127;
	if (m_value != tmp)
	{
		m_value = tmp;
		emit(valueChanged(tmp));
		update();
	}
}
