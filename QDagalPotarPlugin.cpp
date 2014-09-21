#include "QDagalPotar.h"
#include "QDagalPotarPlugin.h"

#include <QtPlugin>

QDagalPotarPlugin::QDagalPotarPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QDagalPotarPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QDagalPotarPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QDagalPotarPlugin::createWidget(QWidget *parent)
{
	return new QDagalPotar(parent);
}

QString QDagalPotarPlugin::name() const
{
	return QLatin1String("QDagalPotar");
}

QString QDagalPotarPlugin::group() const
{
	return QLatin1String("");
}

QIcon QDagalPotarPlugin::icon() const
{
	return QIcon();
}

QString QDagalPotarPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QDagalPotarPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QDagalPotarPlugin::isContainer() const
{
	return false;
}

QString QDagalPotarPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QDagalPotar\" name=\"qDagalPotar\">\n</widget>\n");
}

QString QDagalPotarPlugin::includeFile() const
{
	return QLatin1String("QDagalPotar.h");
}

