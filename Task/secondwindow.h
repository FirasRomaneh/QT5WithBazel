#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <qt5/QtWidgets/QMainWindow>
#include "Task/user.h"

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();
    void SetListData(QVector <User*>);

private slots:
    void on_pushButton_clicked();

private:
    Ui::SecondWindow *ui;

signals:
    void secondshow();

};

#endif // SECONDWINDOW_H
