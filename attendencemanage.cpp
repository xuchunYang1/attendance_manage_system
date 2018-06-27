#include "mainform.h"
#include "ui_attendencemanage.h"

AttendenceManage::AttendenceManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AttendenceManage)
{
    ui->setupUi(this);
}

AttendenceManage::~AttendenceManage()
{
    delete ui;
}
