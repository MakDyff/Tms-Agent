#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include <QQuickView>
#include <QThread>
#include "Models/Main/alltask.h"
#include "Models/Main/jurnal.h"
#include "Models/Main/calendar.h"
#include "quickviewbase.h"

class MainController : public QuickViewBase
{
private:
    QuickItemBase* _quickItemBases[3];

    Q_OBJECT
public:
    MainController();

signals:

public slots:
    void nextItem(int value = 0);
};

#endif // MAINCONTROLLER_H
