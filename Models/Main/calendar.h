#ifndef CALENDAR_H
#define CALENDAR_H

#include <QuickItems/quickitembase.h>
#include <QQmlContext>
#include "iostream"

class Calendar : public QuickItemBase
{
    Q_OBJECT
    Q_PROPERTY(QStringList list READ list WRITE setList NOTIFY listChanged)

private:
    QStringList _list;

public:
    Calendar(QuickViewBase *parent): QuickItemBase(parent, QUrl("qrc:/Main/Calendar.qml")){}

    QStringList list() const;
    void setList(const QStringList &list);

signals:
    void listChanged(const QStringList &list);

    // QuickItemBase interface
public slots:
    void show();
    void allTaskShow();
    void addTask();
};

#endif // CALENDAR_H
