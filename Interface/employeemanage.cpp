#include "employeemanage.h"
#include "ui_employeemanage.h"
#include "DatabaseInfo/employeeinfo.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <QString>

EmployeeManage::EmployeeManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EmployeeManage)
{
    ui->setupUi(this);
    setHeaders(1,5);
    list = new EmployeeInfoList;
}

EmployeeManage::~EmployeeManage()
{
    delete ui;
}

void EmployeeManage::setHeaders(int row, int col)
{
    ui->tableWidget_showInfo->setRowCount(row);
    ui->tableWidget_showInfo->setColumnCount(col);
    //set headers
    QStringList headers;
    headers << "ID" << "Name" << "Title" << "Department" << "Phone";

    ui->tableWidget_showInfo->setHorizontalHeaderLabels(headers);
}

void EmployeeManage::slotShowEmployeeW()
{
    this->show();
}

void EmployeeManage::on_commandLinkButton_returnMainW_clicked()
{
    emit(signalReturnMainW());
    this->close();
}

void EmployeeManage::on_pushButton_viewAll_clicked()
{
//    EmployeeInfoList list;
    QSqlQuery query;
    QString queryString("select * from employee");
    if (query.exec(queryString))
    {
        int id_x = query.record().indexOf("id");
        int name_x = query.record().indexOf("e_name");
        int pswd_x = query.record().indexOf("pswd");
        int title_x = query.record().indexOf("title");
        int deptName_x = query.record().indexOf("d_name");
        int phone_x = query.record().indexOf("tel");

        while (query.next())
        {
            QString id = query.value(id_x).toString();
            QString name = query.value(name_x).toString();
            QString pswd = query.value(pswd_x).toString();
            QString title = query.value(title_x).toString();
            QString deptName = query.value(deptName_x).toString();
            QString phone = query.value(phone_x).toString();


            EmployeeInfo info(id, name, pswd, title, deptName, phone);
            list->append(info);
        }
    }

//    ui->tableWidget_showInfo->setRowCount(list.length());
//    ui->tableWidget_showInfo->setColumnCount(5);

    setHeaders(list->length(), 5);

    for (int i = 0; i < list->length(); i++)
    {
        QTableWidgetItem *item =
                new QTableWidgetItem(list->at(i).getID());
        ui->tableWidget_showInfo->setItem(i, 0, item);
        item = new QTableWidgetItem(list->at(i).getName());
        ui->tableWidget_showInfo->setItem(i, 1, item);
        item = new QTableWidgetItem(list->at(i).getTitle());
        ui->tableWidget_showInfo->setItem(i, 2, item);
        item = new QTableWidgetItem(list->at(i).getDeptName());
        ui->tableWidget_showInfo->setItem(i, 3, item);
        item = new QTableWidgetItem(list->at(i).getTel());
        ui->tableWidget_showInfo->setItem(i, 4, item);
    }
}

void EmployeeManage::on_lineEdit_uid_editingFinished()
{
    m_getUid = ui->lineEdit_uid->text();
}

void EmployeeManage::on_lineEdit_name_editingFinished()
{
    m_getName = ui->lineEdit_name->text();
}

void EmployeeManage::on_pushButton_search_clicked()
{
    QSqlQuery query;
    QString queryString("select id, e_name from employee");

    if (query.exec(queryString))
    {
        int id_idx = query.record().indexOf("id");
        int name_idx = query.record().indexOf("e_name");

        int ret1 = 0;
        int ret2 = 0;
        while (query.next())
        {
            QString id = query.value(id_idx).toString();
            QString name = query.value(name_idx).toString();

            ret1 = QString::compare(id, m_getUid);
            ret2 = QString::compare(name, m_getName);

            if (ret1 == 0 && ret2 == 0)
            {

            }
        }
    }
}
