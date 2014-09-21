#include "QDagalFader.h"
#include "QDagalFaderPlugin.h"

#include <QtPlugin>

QDagalFaderPlugin::QDagalFaderPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QDagalFaderPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QDagalFaderPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QDagalFaderPlugin::createWidget(QWidget *parent)
{
	return new QDagalFader(parent);
}

QString QDagalFaderPlugin::name() const
{
	return QLatin1String("QDagalFader");
}

QString QDagalFaderPlugin::group() const
{
	return QLatin1String("");
}

QIcon QDagalFaderPlugin::icon() const
{
	return QIcon();
}

QString QDagalFaderPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QDagalFaderPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QDagalFaderPlugin::isContainer() const
{
	return false;
}

QString QDagalFaderPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QDagalFader\" name=\"qDagalFader\">\n</widget>\n");
}

QString QDagalFaderPlugin::includeFile() const
{
	return QLatin1String("QDagalFader.h");
}

