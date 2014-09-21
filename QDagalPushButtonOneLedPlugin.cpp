#include "QDagalPushButtonOneLed.h"
#include "QDagalPushButtonOneLedPlugin.h"

#include <QtPlugin>

QDagalPushButtonOneLedPlugin::QDagalPushButtonOneLedPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QDagalPushButtonOneLedPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QDagalPushButtonOneLedPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QDagalPushButtonOneLedPlugin::createWidget(QWidget *parent)
{
	return new QDagalPushButtonOneLed(parent);
}

QString QDagalPushButtonOneLedPlugin::name() const
{
	return QLatin1String("QDagalPushButtonOneLed");
}

QString QDagalPushButtonOneLedPlugin::group() const
{
	return QLatin1String("");
}

QIcon QDagalPushButtonOneLedPlugin::icon() const
{
	return QIcon();
}

QString QDagalPushButtonOneLedPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QDagalPushButtonOneLedPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QDagalPushButtonOneLedPlugin::isContainer() const
{
	return false;
}

QString QDagalPushButtonOneLedPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QDagalPushButtonOneLed\" name=\"qDagalPushButtonOneLed\">\n</widget>\n");
}

QString QDagalPushButtonOneLedPlugin::includeFile() const
{
	return QLatin1String("QDagalPushButtonOneLed.h");
}

