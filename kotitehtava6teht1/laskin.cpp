#include "laskin.h"
#include "ui_laskin.h"

laskin::laskin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::laskin)
{
    ui->setupUi(this);
}

laskin::~laskin()
{
    delete ui;
}


void laskin::on_count_clicked()
{
    QString num = QString::number(numero);
    ui->lineEdit->setText(num);
    numero++;
}


void laskin::on_reset_clicked()
{
    ui->lineEdit->clear();
    numero = 1;
}

