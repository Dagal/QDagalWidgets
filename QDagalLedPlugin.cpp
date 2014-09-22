#include "QDagalLed.h"
#include "QDagalLedPlugin.h"

#include <QtPlugin>

QDagalLedPlugin::QDagalLedPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QDagalLedPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QDagalLedPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QDagalLedPlugin::createWidget(QWidget *parent)
{
	return new QDagalLed(parent);
}

QString QDagalLedPlugin::name() const
{
	return QLatin1String("QDagalLed");
}

QString QDagalLedPlugin::group() const
{
	return QLatin1String("");
}

QIcon QDagalLedPlugin::icon() const
{
	return QIcon(":/LedRouge.xpm");
}

QString QDagalLedPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QDagalLedPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QDagalLedPlugin::isContainer() const
{
	return false;
}

QString QDagalLedPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QDagalLed\" name=\"qDagalLed\">\n</widget>\n");
}

QString QDagalLedPlugin::includeFile() const
{
	return QLatin1String("QDagalLed.h");
}

