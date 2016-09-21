#include "maincontroller.h"

MainController::MainController()
{

}

void MainController::Show(int value)
{
    switch(value)
    {
        case 1:
            allTask = new AllTask(this);
            allTask->Show();
            break;
        default:
            jurnal = new Jurnal(this);
            jurnal->Show();
            break;
    }
}

