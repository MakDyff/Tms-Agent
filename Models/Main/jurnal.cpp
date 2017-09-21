#include "jurnal.h"

void Jurnal::show()
{
    parent->rootContext()->setContextProperty("jurnal", this);
    showBase();
}

void Jurnal::cppCalendar()
{
    parent->nextItem(2);
}
