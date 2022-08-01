#include "hello_world/mainwindow.h"
#include <qt5/QtWidgets/QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MainWindow w;
  int i;
  w.show();

  return a.exec();
}
