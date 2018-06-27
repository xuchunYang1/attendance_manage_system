#include "employeeinfo.h"
#include <QDebug>

EmployeeInfo::EmployeeInfo(QString id, QString name,
             QString pswd, QString title,
             QString deptName, QString tel)
{
    m_id = id;
    m_name = name;
    m_pswd = pswd;
    m_title = title;
    m_deptName = deptName;
    m_tel = tel;
}

EmployeeInfo::~EmployeeInfo()
{

}

void EmployeeInfo::setID(QString id)
{
    m_id = id;
}

void EmployeeInfo::setName(QString name)
{
    m_name = name;
}

void EmployeeInfo::setPswd(QString pswd)
{
    m_pswd = pswd;
}

void EmployeeInfo::setTitle(QString title)
{
    m_title = title;
}

void EmployeeInfo::setDeptName(QString deptName)
{
    m_deptName = deptName;
}

void EmployeeInfo::setTel(QString tel)
{
    m_tel = tel;
}

QString EmployeeInfo::getID() const
{
    return m_id;
}

QString EmployeeInfo::getName() const
{
    return m_name;
}

QString EmployeeInfo::getPswd() const
{
    return m_pswd;
}

QString EmployeeInfo::getTitle() const
{
    return m_title;
}

QString EmployeeInfo::getDeptName() const
{
    return m_deptName;
}

QString EmployeeInfo::getTel() const
{
    return m_tel;
}

void EmployeeInfo::printInfo() const
{
    qDebug() << "--------------Employee-----------------";
    qDebug() << "id: " << m_id;
    qDebug() << "name: " << m_name;
    qDebug() << "pswd: " << m_pswd;
    qDebug() << "title: " << m_title;
    qDebug() << "deptName: " << m_deptName;
    qDebug() << "tel: " << m_tel;
    qDebug() << "----------------end---------------------";
}
