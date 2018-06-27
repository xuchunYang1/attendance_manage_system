#include "employeemanage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EmployeeManage w;
    w.show();

    return a.exec();
}
