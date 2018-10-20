#include "mainwindow.h"
#include "centralwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    CentralWidget *cw = new CentralWidget(this);
    setCentralWidget(cw);
    setWindowTitle("Тестовая программа....");
}

MainWindow::~MainWindow()
{

}
