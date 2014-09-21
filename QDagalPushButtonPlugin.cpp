#include "QDagalPushButton.h"
#include "QDagalPushButtonPlugin.h"

#include <QtPlugin>

QDagalPushButtonPlugin::QDagalPushButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QDagalPushButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QDagalPushButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QDagalPushButtonPlugin::createWidget(QWidget *parent)
{
	return new QDagalPushButton(parent);
}

QString QDagalPushButtonPlugin::name() const
{
	return QLatin1String("QDagalPushButton");
}

QString QDagalPushButtonPlugin::group() const
{
	return QLatin1String("");
}

QIcon QDagalPushButtonPlugin::icon() const
{
	return QIcon();
}

QString QDagalPushButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QDagalPushButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QDagalPushButtonPlugin::isContainer() const
{
	return false;
}

QString QDagalPushButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QDagalPushButton\" name=\"qDagalPushButton\">\n</widget>\n");
}

QString QDagalPushButtonPlugin::includeFile() const
{
	return QLatin1String("QDagalPushButton.h");
}

