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

	void paintEvent(QPaintEvent* event);
	bool state() const;

public slots:
	void setState(bool state);

signals:
	void stateChanged(bool state);

private:
	bool m_state;
};

#endif
