#include "QDagalPushButtonTwoLed.h"
#include "QDagalPushButtonTwoLedPlugin.h"

#include <QtPlugin>

QDagalPushButtonTwoLedPlugin::QDagalPushButtonTwoLedPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QDagalPushButtonTwoLedPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QDagalPushButtonTwoLedPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QDagalPushButtonTwoLedPlugin::createWidget(QWidget *parent)
{
	return new QDagalPushButtonTwoLed(parent);
}

QString QDagalPushButtonTwoLedPlugin::name() const
{
	return QLatin1String("QDagalPushButtonTwoLed");
}

QString QDagalPushButtonTwoLedPlugin::group() const
{
	return QLatin1String("");
}

QIcon QDagalPushButtonTwoLedPlugin::icon() const
{
	return QIcon();
}

QString QDagalPushButtonTwoLedPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QDagalPushButtonTwoLedPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QDagalPushButtonTwoLedPlugin::isContainer() const
{
	return false;
}

QString QDagalPushButtonTwoLedPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QDagalPushButtonTwoLed\" name=\"qDagalPushButtonTwoLed\">\n</widget>\n");
}

QString QDagalPushButtonTwoLedPlugin::includeFile() const
{
	return QLatin1String("QDagalPushButtonTwoLed.h");
}

