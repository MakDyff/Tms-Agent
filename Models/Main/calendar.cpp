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
    _list.append("Item 1");
    _list.append("Item 2");
    _list.append("Item 3");
    _list.append("Item 4");

        //parent->rootContext()->setContextProperty("myModel", listModel);

    parent->rootContext()->setContextProperty("_this", this);
    showBase();
}

void Calendar::allTaskShow()
{
    //parent->nextItem();
    _list.append("Item N");
    emit listChanged(_list);

}
