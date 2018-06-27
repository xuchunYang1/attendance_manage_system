#ifndef CONNECTSQLITE_H
#define CONNECTSQLITE_H

#include <QWidget>

namespace Ui {
class ConnectSqlite;
}

class ConnectSqlite : public QWidget
{
    Q_OBJECT

public:
    explicit ConnectSqlite(QWidget *parent = 0);
    ~ConnectSqlite();

    bool createConnection(); //创建数据库连接
    void closeConnection();   //关闭连接

private:
    Ui::ConnectSqlite *ui;
};

#endif // CONNECTSQLITE_H
