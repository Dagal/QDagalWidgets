#include "QDagalSwitch.h"
#include "QDagalSwitchPlugin.h"

#include <QtPlugin>

QDagalSwitchPlugin::QDagalSwitchPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QDagalSwitchPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QDagalSwitchPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QDagalSwitchPlugin::createWidget(QWidget *parent)
{
	return new QDagalSwitch(parent);
}

QString QDagalSwitchPlugin::name() const
{
	return QLatin1String("QDagalSwitch");
}

QString QDagalSwitchPlugin::group() const
{
	return QLatin1String("");
}

QIcon QDagalSwitchPlugin::icon() const
{
	return QIcon();
}

QString QDagalSwitchPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QDagalSwitchPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QDagalSwitchPlugin::isContainer() const
{
	return false;
}

QString QDagalSwitchPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QDagalSwitch\" name=\"qDagalSwitch\">\n</widget>\n");
}

QString QDagalSwitchPlugin::includeFile() const
{
	return QLatin1String("QDagalSwitch.h");
}

