#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include <QQuickView>
#include <QThread>
#include "Models/Main/alltask.h"
#include "Models/Main/jurnal.h"

class MainController : public QQuickView
{
private:
    AllTask *allTask;
    Jurnal *jurnal;

    Q_OBJECT
public:
    explicit MainController();

signals:

public slots:
    void Show(int value = 0);
};

#endif // MAINCONTROLLER_H
