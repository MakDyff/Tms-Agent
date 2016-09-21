#include "timer.h"

Timer::Timer()
{
}

void Timer::run()
{
    QThread::sleep(2);

    emit Tmp1(1);
}
