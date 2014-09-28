#include "QDagalBarGraph.h"

QDagalBarGraph::QDagalBarGraph(QWidget *parent) :
	QWidget(parent),
	m_value(0)
{
	setMinimumWidth(16);
	setMinimumHeight(16);
}

int QDagalBarGraph::value() const
{
	return m_value;
}

void QDagalBarGraph::paintEvent(QPaintEvent *event)
{
	Q_UNUSED(event);

	int tailleUtile = height() - 6; // 6 = 2 x 3 de bordure
	int nbrLed = tailleUtile / 13; // 13 = taille de led + 3 de bordure
	int totBordureInterne = tailleUtile - nbrLed * 10;
	float tailleBordureInterne = 1.0 * totBordureInterne / (nbrLed - 1);

	QPainter painter(this);

	QPen penGray;
	penGray.setColor(Qt::gray);
	QBrush brush(Qt::SolidPattern);

	float i;
	for (i = 3.0; i < tailleUtile; i += 10 + tailleBordureInterne)
	{
		int pourcentage = (tailleUtile - i) / tailleUtile * 100;
		if (m_value > pourcentage)
		{
			QColor color(pourcentage * 255 / 100, (100 - pourcentage) * 255 / 100, 0);
			brush.setColor(color);
		}
		else
			brush.setColor(Qt::gray);
		painter.setBrush(brush);
		painter.drawRect(3,i,10,10);
	}
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
