#include "connectsqlite.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ConnectSqlite w;
    if (!w.createConnection())
    {
        qDebug() << "connect failed";
        return 1;
    }

    w.show();
    int res = a.exec();
    w.closeConnection();
    return res;
}
