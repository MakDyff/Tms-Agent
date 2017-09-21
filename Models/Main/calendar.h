#ifndef CALENDAR_H
#define CALENDAR_H

#include <QuickItems/quickitembase.h>
#include <QQmlContext>

class Calendar : public QuickItemBase
{
    Q_OBJECT
public:
    Calendar(QuickViewBase *parent): QuickItemBase(parent, QUrl("qrc:/Main/Calendar.qml")){}

signals:
    // QuickItemBase interface
public slots:
    void show();
    void allTaskShow();
};

#endif // CALENDAR_H
