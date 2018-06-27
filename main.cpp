#include "loginform.h"
#include "mainform.h"
#include <QApplication>
#include "ConnectDatabase/connectsqlite.h"
#include "PerformDatabase/employeeform.h"
#include "DatabaseInfo/employeeinfo.h"
#include "Interface/employeemanage.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ConnectSqlite connectSql;
    if (!connectSql.createConnection()) //打开数据库
    {
        qDebug() << "SQLite Create Failed";
        return 1;
    }

    LoginForm loginW; //登录界面
    MainForm mainW;  //主界面
    EmployeeManage employManageW;

    QObject::connect(&loginW, SIGNAL(signalLogin()),
                    &mainW, SLOT(slotMainForm()));
    QObject::connect(&employManageW, SIGNAL(signalReturnMainW()),
                     &mainW, SLOT(slotMainForm()));
    QObject::connect(&mainW, SIGNAL(signalEnterEmployeeM()),
                     &employManageW, SLOT(slotShowEmployeeW()));
    loginW.show();
    //EmployeeForm emW;
    //emW.show();
//    mainW.show();
    int res = a.exec();
    connectSql.closeConnection(); //关闭数据库
    return res;
}
