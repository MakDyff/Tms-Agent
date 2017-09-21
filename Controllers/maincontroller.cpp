#include "maincontroller.h"

MainController::MainController()
{
    _quickItemBases[0] = new AllTask(this);
    _quickItemBases[1] = new Jurnal(this);
    _quickItemBases[2] = new Calendar(this);
}

void MainController::nextItem(int value)
{
    QThread* thread = new QThread();

    if(value > (int)sizeof(_quickItemBases)) {
        value = 0;
    }

    connect(thread, SIGNAL(started()), _quickItemBases[value], SLOT(show()));
    thread->start();
}

