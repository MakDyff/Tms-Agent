#ifndef JURNAL_H
#define JURNAL_H

#include <QuickItems/quickitembase.h>
#include <QQmlContext>

class Jurnal : public QuickItemBase
{
private:
    QuickViewBase *_parent;

    Q_OBJECT
public:
    explicit Jurnal(QuickViewBase *parent): QuickItemBase(parent, QUrl("qrc:/Main/Jurnal.qml")){}

signals:
    void Tmp1(int value);

public slots:
    void show();
    void cppCalendar();

};

#endif // JURNAL_H
