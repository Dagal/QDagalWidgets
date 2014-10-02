#ifndef QDAGALPUSHBUTTON_H
#define QDAGALPUSHBUTTON_H

#include <QWidget>
#include <QPainter>
#include <QLabel>

class QDagalPushButton : public QWidget
{
	Q_OBJECT

public:
	QDagalPushButton(QWidget *parent = 0);

private:
	QPixmap image1;
	QPixmap image2;
};

#endif
