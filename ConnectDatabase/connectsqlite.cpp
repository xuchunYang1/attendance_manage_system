#include "connectsqlite.h"
#include "ui_connectsqlite.h"

#include <QSqlDatabase>
#include <QSqlError>

ConnectSqlite::ConnectSqlite(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConnectSqlite)
{
    ui->setupUi(this);
}

ConnectSqlite::~ConnectSqlite()
{
    delete ui;
}

bool ConnectSqlite::createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("ams.db");

    if (!db.open())
    {
        qCritical("Can't open database: %s(%s)",
                  db.lastError().text().toLocal8Bit().data(),
                  qt_error_string().toLocal8Bit().data());
        return false;
    }

    return true;
}

void ConnectSqlite::closeConnection()
{
    QSqlDatabase::database().close();
}
