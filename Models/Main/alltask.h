#ifndef ALLTASK_H
#define ALLTASK_H

#include <QQuickItem>
#include <QQuickView>
#include <QQmlContext>

#include "Share/timer.h"
#include <QThreadPool>

class AllTask : public QQuickItem
{
private:
    QQuickView *_parent;

    Q_OBJECT
public:
    explicit AllTask(QQuickView *parent);

signals:
    void Tmp1(int value);

public slots:
    void Show();
    void cppSlot();
    void tmp2();

};

#endif // ALLTASK_H
