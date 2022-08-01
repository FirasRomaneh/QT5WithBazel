#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qt5/QtWidgets/QMainWindow>
#include "Task/user.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
//    User* uu;

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

signals:
    void mainshow(User*);

};
#endif // MAINWINDOW_H
