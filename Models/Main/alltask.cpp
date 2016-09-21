#include "alltask.h"

AllTask::AllTask(QQuickView *parent)
{
    _parent = parent;
}

void AllTask::Show()
{
    _parent->rootContext()->setContextProperty("allTask", this);
    QObject::connect(this,SIGNAL(Tmp1(int)),_parent,SLOT(Show(int)));

    _parent->setSource(QUrl(QStringLiteral("qrc:/Main/AllTask.qml")));
    _parent->show();
}

void AllTask::cppSlot()
{
    QThread *thread = new QThread(this);
    connect(thread, SIGNAL(started()), this,SLOT(tmp2()));
    thread->start();
}

void AllTask::tmp2()
{
    emit Tmp1(0);
}
