#ifndef QDAGALBARGRAPH_H
#define QDAGALBARGRAPH_H

#include <QWidget>
#include <QPainter>

class QDagalBarGraph : public QWidget
{
	Q_OBJECT

	Q_PROPERTY(int value READ value WRITE setValue NOTIFY valueChanged)

public:
	QDagalBarGraph(QWidget *parent = 0);

	int value() const;
	void paintEvent(QPaintEvent* event);

public slots:
	void setValue(int value);

signals:
	void valueChanged(int value);

private:
	int m_value;
};

#endif
