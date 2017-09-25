#include <QtGui/QGuiApplication>
#include "Controllers/maincontroller.h"
#include "Share/timer.h"
#include <QThreadPool>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

//    MainController *mainController = new MainController();
//    Timer *timer = new Timer();

//    QObject::connect(timer,SIGNAL(Tmp1(int)),mainController,SLOT(Show(int)));

    //QThreadPool *threadPool = QThreadPool::globalInstance();
    //threadPool->start(timer);

//    mainController->Show(1);

    MainController m;
    m.nextItem(2);

    return app.exec();
}
