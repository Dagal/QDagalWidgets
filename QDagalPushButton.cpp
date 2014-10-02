#include "QDagalPushButton.h"

QDagalPushButton::QDagalPushButton(QWidget *parent) :
	QWidget(parent)
{
	image1.load(":/BoutonMetalBrosseSurPlastiqueBlanc.xpm");
	image2.load(":/BoutonMetalBrosseSurPlastiqueBlancEnfonce.xpm");

//	QPainter painter(this);

//	painter.drawPixmap(3,3,40,20,image1);

	QPixmap image(":/BoutonMetalBrosseSurPlastiqueBlancEnfonce.xpm");
	QLabel label("Image",this);
	label.setPixmap(image);

}
