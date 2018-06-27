#include "mainform.h"
#include "ui_mainform.h"

MainForm::MainForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainForm)
{
    ui->setupUi(this);
}

MainForm::~MainForm()
{
    delete ui;

}

void MainForm::slotMainForm()
{
    this->show();
}


void MainForm::on_pushButton_employManage_clicked()
{
    emit(signalEnterEmployeeM());
    this->close();
}

void MainForm::on_pushButton_exit_clicked()
{
    this->close();
}
