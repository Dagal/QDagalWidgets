#include "QDagalJog.h"
#include "QDagalJogPlugin.h"

#include <QtPlugin>

QDagalJogPlugin::QDagalJogPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QDagalJogPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QDagalJogPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QDagalJogPlugin::createWidget(QWidget *parent)
{
	return new QDagalJog(parent);
}

QString QDagalJogPlugin::name() const
{
	return QLatin1String("QDagalJog");
}

QString QDagalJogPlugin::group() const
{
	return QLatin1String("");
}

QIcon QDagalJogPlugin::icon() const
{
	return QIcon();
}

QString QDagalJogPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QDagalJogPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QDagalJogPlugin::isContainer() const
{
	return false;
}

QString QDagalJogPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QDagalJog\" name=\"qDagalJog\">\n</widget>\n");
}

QString QDagalJogPlugin::includeFile() const
{
	return QLatin1String("QDagalJog.h");
}

