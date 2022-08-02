#include "hello_world/mainwindow.h"
#include <opencv2/opencv.hpp>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent)
{
  ui.setupUi(this);
  cv::Mat img;
  img = cv::imread("hello_world/test.jpg");
  // std::cout << img.size();
  ui.label->setPixmap(QPixmap::fromImage(QImage(img.data, img.cols, img.rows, img.step, QImage::Format_RGB888)));
}
