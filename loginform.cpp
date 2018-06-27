#include "loginform.h"
#include "ui_loginform.h"
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QMessageBox>

LoginForm::LoginForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::on_pushButton_login_clicked()
{
    QSqlQuery query;
    QString queryString("select id , pswd from employee");

    if (query.exec(queryString))
    {
        int id_idx = query.record().indexOf("id");
        int pswd_idx = query.record().indexOf("pswd");

        int ret1 = 0;
        int ret2 = 0;
        while (query.next())
        {
            QString id = query.value(id_idx).toString();
            QString pswd = query.value(pswd_idx).toString();

            ret1 = QString::compare(id, m_uid);
            ret2 = QString::compare(pswd, m_pswd);

            if (ret1 != 0 && ret2 != 0 || ret1 == 0 && ret2 != 0
                    || ret1 != 0 && ret2 == 0)
            {
                qDebug() << "ID and Password are not match";
            }
            else
            {
                qDebug() << "Login Succeed";
                emit(signalLogin());
                this->close();
                break;
            }
        }
    }
}

void LoginForm::on_lineEdit_uid_editingFinished()
{
    m_uid = ui->lineEdit_uid->text();  //get UID
    //qDebug() << "UID: " << m_uid;
}

void LoginForm::on_lineEdit_pswd_editingFinished()
{
     m_pswd = ui->lineEdit_pswd->text();  //get Password
     //qDebug() << "Password" << m_pswd;
}

QString LoginForm::getUID() const
{
    return m_uid;
}

QString LoginForm::getPswd() const
{
    return m_pswd;
}
