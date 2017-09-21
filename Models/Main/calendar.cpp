#include "calendar.h"

void Calendar::show()
{
    parent->rootContext()->setContextProperty("_this", this);
    showBase();
}

void Calendar::allTaskShow()
{
    parent->nextItem();
}
