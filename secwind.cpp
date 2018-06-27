#include "secwind.h"
#include "ui_secwind.h"

SecWind::SecWind(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecWind)
{
    ui->setupUi(this);
}

SecWind::~SecWind()
{
    delete ui;
}
