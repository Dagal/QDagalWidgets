#include "QDagalLCD.h"
#include "QDagalLCDPlugin.h"

#include <QtPlugin>

QDagalLCDPlugin::QDagalLCDPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QDagalLCDPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QDagalLCDPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QDagalLCDPlugin::createWidget(QWidget *parent)
{
	return new QDagalLCD(parent);
}

QString QDagalLCDPlugin::name() const
{
	return QLatin1String("QDagalLCD");
}

QString QDagalLCDPlugin::group() const
{
	return QLatin1String("");
}

QIcon QDagalLCDPlugin::icon() const
{
	return QIcon();
}

QString QDagalLCDPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QDagalLCDPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QDagalLCDPlugin::isContainer() const
{
	return false;
}

QString QDagalLCDPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QDagalLCD\" name=\"qDagalLCD\">\n</widget>\n");
}

QString QDagalLCDPlugin::includeFile() const
{
	return QLatin1String("QDagalLCD.h");
}

