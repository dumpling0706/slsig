#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QPushButton>
#include <QWidget>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->exitBtn, SIGNAL(clicked()), this, SLOT(close()));
    //QObject::connect(ui->spinBox,SIGNAL(valueChanged(QString)),ui->pushButton,SLOT(close()));
    QObject::connect(ui->spinBox,SIGNAL(valueChanged(QString)),this,SLOT(pushButton1()));

}
//wbah
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pushButton1()
{


    ui->label->setNum(ui->spinBox->value());
    ui->label->setVisible(0);
    ui-> pushButton->setText(ui->label->text());
}

void MainWindow::on_pushButton_clicked()
{ hide();
  window=new SecWind(this);
  window->show();
}

//void MainWindow::exitSlot()
//{
//    MainWindow::close();
//}
