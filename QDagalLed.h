#ifndef QDAGALLED_H
#define QDAGALLED_H

#include <QWidget>
#include <QPainter>

class QDagalLed : public QWidget
{
	Q_OBJECT

	Q_PROPERTY(bool state READ state WRITE setState NOTIFY stateChanged)

public:
	QDagalLed(QWidget *parent = 0);

	bool state() const;
	void paintEvent(QPaintEvent* event);

public slots:
	void setState(bool value);

signals:
	void stateChanged(bool value);

private:
	bool m_state;
};

#endif
