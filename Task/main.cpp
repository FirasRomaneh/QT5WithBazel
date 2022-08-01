#include "Task/mainwindow.h"
#include "Task/secondwindow.h"
#include <iostream>
#include <qt5/QtWidgets/QApplication>
#include "Task/ControllerUsers.h"

//QVector<User*> ControllerUsers::data1 = QVector<User*>();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ControllerUsers w;
    return a.exec();
}
