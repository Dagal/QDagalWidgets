#include "QDagalLed.h"

QDagalLed::QDagalLed(QWidget *parent) :
	QWidget(parent),
	m_state(false)
{
	setMinimumWidth(16);
	setMinimumHeight(16);
}

bool QDagalLed::state() const
{
	return m_state;
}

void QDagalLed::paintEvent(QPaintEvent* event)
{
	Q_UNUSED(event);

	int centerX = width() / 2;
	int centerY = height() / 2;
	int radius = ((centerX < centerY)?centerX:centerY) - 3;

	QPainter painter(this);
	QPen pen;
	pen.setColor(Qt::gray);
	pen.setWidth(2);
	painter.setPen(pen);
	QBrush brush(Qt::SolidPattern);
	brush.setColor(m_state?Qt::red:Qt::gray);
	painter.setBrush(brush);
	painter.drawEllipse(centerX - radius,
											centerY - radius,
											radius * 2,
											radius * 2);
}

void QDagalLed::setState(bool state)
{
	if (m_state != state)
	{
		m_state = state;
		emit(stateChanged(state));
		update();
	}
}
