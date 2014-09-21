#include "QDagalEncoder.h"
#include "QDagalEncoderPlugin.h"

#include <QtPlugin>

QDagalEncoderPlugin::QDagalEncoderPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QDagalEncoderPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QDagalEncoderPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QDagalEncoderPlugin::createWidget(QWidget *parent)
{
	return new QDagalEncoder(parent);
}

QString QDagalEncoderPlugin::name() const
{
	return QLatin1String("QDagalEncoder");
}

QString QDagalEncoderPlugin::group() const
{
	return QLatin1String("");
}

QIcon QDagalEncoderPlugin::icon() const
{
	return QIcon();
}

QString QDagalEncoderPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QDagalEncoderPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QDagalEncoderPlugin::isContainer() const
{
	return false;
}

QString QDagalEncoderPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QDagalEncoder\" name=\"qDagalEncoder\">\n</widget>\n");
}

QString QDagalEncoderPlugin::includeFile() const
{
	return QLatin1String("QDagalEncoder.h");
}

