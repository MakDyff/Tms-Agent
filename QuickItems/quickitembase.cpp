#include "quickitembase.h"

QuickItemBase::QuickItemBase(QuickViewBase *parent, QUrl qmlUrl)
{
    this->parent = parent;
    _qmlUrl = qmlUrl;
}

void QuickItemBase::showBase()
{
    parent->setSource(_qmlUrl);
    parent->show();
}
