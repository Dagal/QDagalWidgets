#include "QDagalBarGraph.h"

QDagalBarGraph::QDagalBarGraph(QWidget *parent) :
	QWidget(parent),
	m_value(0)
{
	setMinimumWidth(16);
	setMinimumHeight(81);
}

int QDagalBarGraph::value() const
{
	return m_value;
}

void QDagalBarGraph::paintEvent(QPaintEvent *event)
{
	Q_UNUSED(event);

	QPainter painter(this);

	QPen penGray;
	penGray.setColor(Qt::gray);
	QBrush brush(Qt::SolidPattern);

	if (m_value > 100)
		brush.setColor(Qt::red);
	else
		brush.setColor(Qt::gray);
	painter.setBrush(brush);
	painter.drawRect(0,3,10,10);
	if (m_value > 80)
		brush.setColor(Qt::yellow);
	else
		brush.setColor(Qt::gray);
	painter.setBrush(brush);
	painter.drawRect(0,16,10,10);
	if (m_value > 60)
		brush.setColor(Qt::yellow);
	else
		brush.setColor(Qt::gray);
	painter.setBrush(brush);
	painter.drawRect(0,29,10,10);
	if (m_value > 40)
		brush.setColor(Qt::green);
	else
		brush.setColor(Qt::gray);
	painter.setBrush(brush);
	painter.drawRect(0,42,10,10);
	if (m_value > 20)
		brush.setColor(Qt::green);
	else
		brush.setColor(Qt::gray);
	painter.setBrush(brush);
	painter.drawRect(0,55,10,10);
	if (m_value > 0)
		brush.setColor(Qt::green);
	else
		brush.setColor(Qt::gray);
	painter.setBrush(brush);
	painter.drawRect(0,68,10,10);

}

void QDagalBarGraph::setValue(int value)
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
