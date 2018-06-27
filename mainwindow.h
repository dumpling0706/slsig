#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include<QObject>
#include "secwind.h"

class QPushButton;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();




private slots:
    void on_pushButton_clicked();

void pushButton1();
    // void exitSlot();
private:
    Ui::MainWindow *ui;
   SecWind *window;
};

#endif // MAINWINDOW_H
