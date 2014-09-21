#ifndef QDAGAL_H
#define QDAGAL_H

#include <QtDesigner>
#include <qplugin.h>

class QDagal : public QObject, public QDesignerCustomWidgetCollectionInterface
{
	Q_OBJECT
	Q_INTERFACES(QDesignerCustomWidgetCollectionInterface)
#if QT_VERSION >= 0x050000
	Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QDesignerCustomWidgetCollectionInterface")
#endif // QT_VERSION >= 0x050000

public:
	explicit QDagal(QObject *parent = 0);

	virtual QList<QDesignerCustomWidgetInterface*> customWidgets() const;

private:
	QList<QDesignerCustomWidgetInterface*> m_widgets;
};

#endif
