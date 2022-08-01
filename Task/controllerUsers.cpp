#include "Task/ControllerUsers.h"
#include <iostream>

ControllerUsers::ControllerUsers() {
    main = new MainWindow();
    second = new SecondWindow();
    connect(main, &MainWindow::mainshow, this, &ControllerUsers::showSecond);
    connect(second, &SecondWindow::secondshow, this, &ControllerUsers::showMain);
    second->show();
}

ControllerUsers::~ControllerUsers()
{
//   hide();
}

void ControllerUsers::showSecond(User* uu){
    data1.append(uu);
    main->close();
    second->SetListData(data1);
    second->show();
}

void ControllerUsers::showMain(){
    second->close();
    main->show();
}
