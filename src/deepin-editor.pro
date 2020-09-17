######################################################################
# Automatically generated by qmake (3.0) ?? 2? 4 17:49:37 2017
######################################################################

QT += KSyntaxHighlighting
QT += core
QT += dbus
QT += gui
QT += network
QT += printsupport
QT += svg
QT += widgets
QT += x11extras
QT += KCodecs

TEMPLATE = app
TARGET = deepin-editor

CONFIG += link_pkgconfig
CONFIG += c++11
PKGCONFIG += xcb xcb-util dtkwidget dtkwm dtkgui dframeworkdbus
RESOURCES += deepin-editor.qrc

# Input
HEADERS += window.h \
           startmanager.h \
           dbusinterface.h \
           dtextedit.h \
           jumplinebar.h \
           findbar.h \
           replacebar.h \
           linebar.h \
           settings.h \
           tabbar.h \
           toolbar.h \
           #editorbuffer.h \
           linenumberarea.h \
           editwrapper.h \
           uncommentselection.h \
           utils.h \
           urlinfo.h \
           fileloadthread.h \
           widgets/ddropdownmenu.h \
           widgets/bottombar.h \
           widgets/toast.h \
           thememodule/themelistmodel.h \
           thememodule/themeitemdelegate.h \
           thememodule/themepanel.h \
           thememodule/themelistview.h \
           environments.h \
           fontitemdelegate.h \
    	   warningnotices.h \
    bookmarkwidget.h \
    leftareaoftextedit.h \
    codeflodarea.h \
    showflodcodewidget.h \
    widgets/ColorSelectWdg.h \
    editorapplication.h

SOURCES += window.cpp \
           startmanager.cpp \
           dbusinterface.cpp \
           dtextedit.cpp \
           jumplinebar.cpp \
           findbar.cpp \
           replacebar.cpp \
           linebar.cpp \
           settings.cpp \
           settingsdialog.cpp \
           tabbar.cpp \
           toolbar.cpp \
           #editorbuffer.cpp \
           linenumberarea.cpp \
           editwrapper.cpp \
           utils.cpp \
           uncommentselection.cpp \
           main.cpp \
           fileloadthread.cpp \
           widgets/ddropdownmenu.cpp \
           widgets/toast.cpp \
           widgets/bottombar.cpp \
           thememodule/themeitemdelegate.cpp \
           thememodule/themepanel.cpp \
           thememodule/themelistmodel.cpp \
           thememodule/themelistview.cpp \
           fontitemdelegate.cpp \
    	   warningnotices.cpp \
    bookmarkwidget.cpp \
    leftareaoftextedit.cpp \
    codeflodarea.cpp \
    showflodcodewidget.cpp \
    widgets/ColorSelectWdg.cpp \
    editorapplication.cpp


QMAKE_CXXFLAGS += -g
LIBS += -lX11 -lXext -lXtst

isEmpty(BINDIR):BINDIR=/usr/bin
isEmpty(APPDIR):APPDIR=/usr/share/applications
isEmpty(DSRDIR):DSRDIR=/usr/share/deepin-editor

target.path = $$INSTROOT$$BINDIR
desktop.path = $$INSTROOT$$APPDIR
desktop.files = $$PWD/../deepin-editor.desktop

themes.path = $$DSRDIR/themes
themes.files += themes/deepin.theme
themes.files += themes/breeze_dark.theme
themes.files += themes/solarized_dark.theme
themes.files += themes/solarized_light.theme
themes.files += themes/atom_dark.theme

INSTALLS += target desktop themes

DISTFILES += \
    themes/deepin_dark.theme \
    images/warning.svg
TRANSLATIONS += ../translations/deepin-editor_zh_CN.ts\
    ../translations/deepin-editor_zh_HK.ts\
    ../translations/deepin-editor_zh_TW.ts\
    ../translations/deepin-editor.ts
