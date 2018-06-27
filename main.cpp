#include "mainwindow.h"
#include <QApplication>
#include <QFont>
#include <QWidget>
#include<QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //QMainWindow *w = new QMainWindow(0, Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::CustomizeWindowHint);
    MainWindow w;
    w.setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint| Qt::CustomizeWindowHint);
    w.show();





    return a.exec();
}
