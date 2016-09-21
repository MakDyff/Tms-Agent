#include "jurnal.h"

Jurnal::Jurnal(QQuickView *parent)
{
    _parent = parent;
}

void Jurnal::Show()
{
    //_parent->setSource(QUrl(QStringLiteral("qrc:/Main/Calendar.qml")));
    _parent->setSource(QUrl(QStringLiteral("qrc:/Main/Jurnal.qml")));
    _parent->show();
}
