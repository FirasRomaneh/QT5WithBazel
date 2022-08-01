#include "Task/mainwindow.h"
#include "Task/ui_mainwindow.h"
#include "Task/user.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDate date = QDate::currentDate();
    ui->dateEdit->setDate(date);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString name = ui->plainTextEdit->toPlainText();
    QString email = ui->plainTextEdit_2->toPlainText();
    QString password = ui->plainTextEdit_4->toPlainText();
    QString phone = ui->plainTextEdit_3->toPlainText();
    QString gender =  ui->comboBox->currentText();
    QString dob =  ui->dateEdit->date().toString("yyyy.MM.dd");
    User* uu = new User(name, email, password, phone, gender, dob);
    ui->plainTextEdit->setPlainText("");
    ui->plainTextEdit_2->setPlainText("");
    ui->plainTextEdit_3->setPlainText("");
    ui->plainTextEdit_4->setPlainText("");
    ui->comboBox->setCurrentText("");
    QDate date = QDate::currentDate();
    ui->dateEdit->setDate(date);
    emit mainshow(uu);
}
