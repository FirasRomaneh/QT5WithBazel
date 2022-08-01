#include "Task/secondwindow.h"
#include "Task/ui_secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
//    QVector<User*> data1 = ControllerUsers::getAlluser();
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_clicked()
{
//    this->close();
    emit secondshow();
}

void SecondWindow::SetListData(QVector <User*> Setdata){
    ui->listWidget->clear();
    for(auto i: Setdata){
        ui->listWidget->addItem(i->getName());
    }
}
