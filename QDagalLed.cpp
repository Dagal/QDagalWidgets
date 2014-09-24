#include "QDagalLed.h"

QDagalLed::QDagalLed(QWidget *parent) :
	QWidget(parent),
	m_state(false)
{
	setMinimumWidth(40);
	setMinimumHeight(40);
}

bool QDagalLed::state() const
{
	return m_state;
}

void QDagalLed::paintEvent(QPaintEvent* event)
{
	Q_UNUSED(event);

	QPainter painter(this);
//	QPen pen;
//	pen.setColor(m_state?Qt::red:Qt::gray);
//	pen.setWidth(1);
//	painter.setPen(pen);
	QBrush brush(Qt::SolidPattern);
	brush.setColor(m_state?Qt::red:Qt::gray);
	painter.setBrush(brush);
	painter.drawEllipse(10,10,20,20);
}

void QDagalLed::setState(bool value)
{
	if (m_state != value)
	{
		m_state = value;
		emit(stateChanged(value));
		update();
	}
}

