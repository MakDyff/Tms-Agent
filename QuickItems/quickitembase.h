#ifndef QUICKITEMBASE_H
#define QUICKITEMBASE_H

#include <QQuickItem>

#include <Controllers/quickviewbase.h>

class QuickItemBase : public QQuickItem
{
    Q_OBJECT

private:
    QUrl _qmlUrl;
protected:
    QuickViewBase *parent;
    void showBase();

public:
    QuickItemBase(QuickViewBase *parent, QUrl qmlUrl);


signals:

public slots:
    virtual void show() =0;
};

#endif // QUICKITEMBASE_H
