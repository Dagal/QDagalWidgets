#include "QDagalLedPlugin.h"
#include "QDagalBarGraphPlugin.h"
#include "QDagalPotarPlugin.h"
#include "QDagalEncoderPlugin.h"
#include "QDagalFaderPlugin.h"
#include "QDagalPushButtonPlugin.h"
#include "QDagalPushButtonOneLedPlugin.h"
#include "QDagalPushButtonTwoLedPlugin.h"
#include "QDagalSwitchPlugin.h"
#include "QDagalLCDPlugin.h"
#include "QDagalJogPlugin.h"
#include "QDagalSelectorPlugin.h"
#include "QDagal.h"

QDagal::QDagal(QObject *parent)
	: QObject(parent)
{
	m_widgets.append(new QDagalLedPlugin(this));
	m_widgets.append(new QDagalBarGraphPlugin(this));
	m_widgets.append(new QDagalPotarPlugin(this));
	m_widgets.append(new QDagalEncoderPlugin(this));
	m_widgets.append(new QDagalFaderPlugin(this));
	m_widgets.append(new QDagalPushButtonPlugin(this));
	m_widgets.append(new QDagalPushButtonOneLedPlugin(this));
	m_widgets.append(new QDagalPushButtonTwoLedPlugin(this));
	m_widgets.append(new QDagalSwitchPlugin(this));
	m_widgets.append(new QDagalLCDPlugin(this));
	m_widgets.append(new QDagalJogPlugin(this));
	m_widgets.append(new QDagalSelectorPlugin(this));

}

QList<QDesignerCustomWidgetInterface*> QDagal::customWidgets() const
{
	return m_widgets;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(qdagalplugin, QDagal)
#endif // QT_VERSION < 0x050000
