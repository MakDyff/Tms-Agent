# Add more folders to ship with the application, here
QT += qml quick
QT += widgets

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH =

# The .cpp file which was generated for your project. Feel free to hack it.
SOURCES += main.cpp \
    Controllers/maincontroller.cpp \
    Models/Main/alltask.cpp \
    Models/Main/jurnal.cpp \
    Share/timer.cpp \
    QuickItems/quickitembase.cpp \
    Controllers/quickviewbase.cpp \
    Models/Main/calendar.cpp

# Installation path
# target.path =

# Please do not modify the following two lines. Required for deployment.
include(qtquick2applicationviewer/qtquick2applicationviewer.pri)
qtcAddDeployment()

HEADERS += \
    Controllers/maincontroller.h \
    Models/Main/alltask.h \
    Models/Main/jurnal.h \
    Share/timer.h \
    QuickItems/quickitembase.h \
    Controllers/quickviewbase.h \
    Models/Main/calendar.h

OTHER_FILES +=

RESOURCES += \
    qmlsource.qrc
