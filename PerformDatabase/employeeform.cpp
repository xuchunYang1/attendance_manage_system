#include "employeeform.h"
#include "ui_employeeform.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <QString>
#include <QDebug>

#include "DatabaseInfo/employeeinfo.h"

EmployeeForm::EmployeeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EmployeeForm)
{
    ui->setupUi(this);
}

EmployeeForm::~EmployeeForm()
{
    delete ui;
}

void EmployeeForm::on_pushButton_showInfo_clicked()
{
    EmployeeInfoList list;
    QSqlQuery query;

    QString queryString("select * from employee");

    if (query.exec(queryString))
    {
        int id_x = query.record().indexOf("id");
        int name_x = query.record().indexOf("e_name");
        //qDebug() << "name_x: " <<name_x;
        int pswd_x = query.record().indexOf("pswd");
        int title_x = query.record().indexOf("title");
        int deptName_x = query.record().indexOf("d_name");
        int phone_x = query.record().indexOf("tel");

        while (query.next())
        {
            QString id = query.value(id_x).toString();
            //qDebug() << "id: " << id;
            QString name = query.value(name_x).toString();
            QString pswd = query.value(pswd_x).toString();
            QString title = query.value(title_x).toString();
            QString deptName = query.value(deptName_x).toString();
            QString phone = query.value(phone_x).toString();

            EmployeeInfo info(id, name, pswd, title, deptName, phone);
            list.append(info);
        }
    }

    ui->tableWidget_employee->setRowCount(list.length());
    ui->tableWidget_employee->setColumnCount(6);

    //set headers
    QStringList headers;
    headers << "ID" << "Name" << "Password" << "Title" << "Department" << "Phone";

    ui->tableWidget_employee->setHorizontalHeaderLabels(headers);

    for (int i = 0; i < list.length(); i++)
    {
        QTableWidgetItem *item =
                new QTableWidgetItem(list.at(i).getID());
        ui->tableWidget_employee->setItem(i, 0, item);
        item = new QTableWidgetItem(list.at(i).getName());
        ui->tableWidget_employee->setItem(i, 1, item);
        item = new QTableWidgetItem(list.at(i).getPswd());
        ui->tableWidget_employee->setItem(i, 2, item);
        item = new QTableWidgetItem(list.at(i).getTitle());
        ui->tableWidget_employee->setItem(i, 3, item);
        item = new QTableWidgetItem(list.at(i).getDeptName());
        ui->tableWidget_employee->setItem(i, 4, item);
        item = new QTableWidgetItem(list.at(i).getTel());
        ui->tableWidget_employee->setItem(i, 5, item);
    }
}
