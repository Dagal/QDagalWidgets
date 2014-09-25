#ifndef QDAGALENCODER_H
#define QDAGALENCODER_H

#include <QAbstractSlider>
#include <QPainter>

class QDagalEncoder : public QAbstractSlider
{
	Q_OBJECT

public:
	QDagalEncoder(QWidget *parent = 0);

	void paintEvent(QPaintEvent *event);

public slots:
	void setValue(int value);

signals:

private:
};

#endif
