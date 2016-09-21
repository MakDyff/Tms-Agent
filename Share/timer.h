#ifndef TIMER_H
#define TIMER_H

#include <QObject>
#include <QRunnable>
#include <QThread>

class Timer : public QObject, public QRunnable
{
    Q_OBJECT
public:
    explicit Timer();
    void run();

signals:
    void Tmp1(int value);

public slots:

};

#endif // TIMER_H
