CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(qdagalplugin)
TEMPLATE    = lib

HEADERS     = QDagalLedPlugin.h QDagalBarGraphPlugin.h QDagalPotarPlugin.h QDagalEncoderPlugin.h QDagalFaderPlugin.h QDagalPushButtonPlugin.h QDagalPushButtonOneLedPlugin.h QDagalPushButtonTwoLedPlugin.h QDagalSwitchPlugin.h QDagalLCDPlugin.h QDagalJogPlugin.h QDagalSelectorPlugin.h QDagal.h
SOURCES     = QDagalLedPlugin.cpp QDagalBarGraphPlugin.cpp QDagalPotarPlugin.cpp QDagalEncoderPlugin.cpp QDagalFaderPlugin.cpp QDagalPushButtonPlugin.cpp QDagalPushButtonOneLedPlugin.cpp QDagalPushButtonTwoLedPlugin.cpp QDagalSwitchPlugin.cpp QDagalLCDPlugin.cpp QDagalJogPlugin.cpp QDagalSelectorPlugin.cpp QDagal.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(qdagalbargraph.pri)
include(qdagalfader.pri)
include(qdagalpushbutton.pri)
include(qdagalencoder.pri)
include(qdagalpushbuttontwoled.pri)
include(qdagalpotar.pri)
include(qdagalpushbuttononeled.pri)
include(qdagaljog.pri)
include(qdagalled.pri)
include(qdagalswitch.pri)
include(qdagallcd.pri)
include(qdagalselector.pri)

OTHER_FILES +=
