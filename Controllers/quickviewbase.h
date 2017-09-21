#ifndef QUICKVIEWBASE_H
#define QUICKVIEWBASE_H

#include <QQuickView>



class QuickViewBase : public QQuickView
{
public:
    QuickViewBase();

public slots:
    virtual void nextItem(int value = 0) =0;
};

#endif // QUICKVIEWBASE_H
