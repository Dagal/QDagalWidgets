#include "QDagalSelector.h"
#include "QDagalSelectorPlugin.h"

#include <QtPlugin>

QDagalSelectorPlugin::QDagalSelectorPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QDagalSelectorPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QDagalSelectorPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QDagalSelectorPlugin::createWidget(QWidget *parent)
{
	return new QDagalSelector(parent);
}

QString QDagalSelectorPlugin::name() const
{
	return QLatin1String("QDagalSelector");
}

QString QDagalSelectorPlugin::group() const
{
	return QLatin1String("");
}

QIcon QDagalSelectorPlugin::icon() const
{
	return QIcon();
}

QString QDagalSelectorPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QDagalSelectorPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QDagalSelectorPlugin::isContainer() const
{
	return false;
}

QString QDagalSelectorPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QDagalSelector\" name=\"qDagalSelector\">\n</widget>\n");
}

QString QDagalSelectorPlugin::includeFile() const
{
	return QLatin1String("QDagalSelector.h");
}

