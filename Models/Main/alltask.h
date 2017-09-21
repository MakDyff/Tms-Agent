#ifndef ALLTASK_H
#define ALLTASK_H

#include <QQmlContext>
#include <QuickItems/quickitembase.h>

class AllTask : public QuickItemBase
{
    Q_OBJECT

public:
    AllTask(QuickViewBase *parent): QuickItemBase(parent, QUrl("qrc:/Main/AllTask.qml")){}

public slots:
    void show();
    void cppSlot();

};

#endif // ALLTASK_H
