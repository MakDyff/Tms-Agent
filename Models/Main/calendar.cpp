#include "calendar.h"


QStringList Calendar::list() const
{
    return _list;
}

void Calendar::setList(const QStringList &list)
{
    _list = list;
}

void Calendar::show()
{
    parent->rootContext()->setContextProperty("_this", this);
    showBase();
}

void Calendar::allTaskShow()
{
    parent->nextItem();
}

void Calendar::addTask()
{

    _list.append("Item " + QString::number(sizeof(_list) + 1));
    emit listChanged(_list);
}
