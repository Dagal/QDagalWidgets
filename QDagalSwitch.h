#ifndef QDAGALSWITCH_H
#define QDAGALSWITCH_H

#include <QWidget>
#include <QPainter>

class QDagalSwitch : public QWidget
{
	Q_OBJECT

	Q_PROPERTY(int value READ value WRITE setValue NOTIFY valueChanged)

public:
	QDagalSwitch(QWidget *parent = 0);

	void mousePressEvent(QMouseEvent* event);
	void paintEvent(QPaintEvent* event);
	int value() const;

public slots:
	void setValue(int value);

signals:
	void valueChanged(int value);

private:
	int m_value;
};

#endif
