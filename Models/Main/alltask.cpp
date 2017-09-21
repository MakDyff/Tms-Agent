#include "alltask.h"

void AllTask::show()
{
    parent->rootContext()->setContextProperty("allTask", this);
    showBase();
}

void AllTask::cppSlot()
{
    parent->nextItem(1);
}

