#ifndef CONTROLLERUSERS_H
#define CONTROLLERUSERS_H

#include <qt5/QtWidgets/QMainWindow>
#include "Task/secondwindow.h"
#include "Task/mainwindow.h"
#include "Task/user.h"


class ControllerUsers: public QObject{
public:
    ControllerUsers();
    ~ControllerUsers();

private slots:
    void showSecond(User*);
    void showMain();


private:
    MainWindow* main;
    SecondWindow* second;
    QVector<User*> data1;
};


#endif // CONTROLLERUSERS_H
