#ifndef QDAGALFADER_H
#define QDAGALFADER_H

#include <QWidget>
#include <QPainter>

class QDagalFader : public QWidget
{
	Q_OBJECT

	Q_PROPERTY(int value READ value WRITE setValue NOTIFY valueChanged)

public:
	QDagalFader(QWidget *parent = 0);

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
