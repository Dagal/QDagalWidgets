#ifndef QDAGALPOTAR_H
#define QDAGALPOTAR_H

#include <QAbstractSlider>
#include <QPainter>

class QDagalPotar : public QAbstractSlider
{
	Q_OBJECT

public:
	QDagalPotar(QWidget *parent = 0);

	void paintEvent(QPaintEvent *event);

public slots:

signals:

private:
};

#endif
