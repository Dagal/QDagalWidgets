#include "QDagalBarGraph.h"
#include "QDagalBarGraphPlugin.h"

#include <QtPlugin>

QDagalBarGraphPlugin::QDagalBarGraphPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QDagalBarGraphPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QDagalBarGraphPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QDagalBarGraphPlugin::createWidget(QWidget *parent)
{
	return new QDagalBarGraph(parent);
}

QString QDagalBarGraphPlugin::name() const
{
	return QLatin1String("QDagalBarGraph");
}

QString QDagalBarGraphPlugin::group() const
{
	return QLatin1String("");
}

QIcon QDagalBarGraphPlugin::icon() const
{
	return QIcon();
}

QString QDagalBarGraphPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QDagalBarGraphPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QDagalBarGraphPlugin::isContainer() const
{
	return false;
}

QString QDagalBarGraphPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QDagalBarGraph\" name=\"qDagalBarGraph\">\n</widget>\n");
}

QString QDagalBarGraphPlugin::includeFile() const
{
	return QLatin1String("QDagalBarGraph.h");
}

