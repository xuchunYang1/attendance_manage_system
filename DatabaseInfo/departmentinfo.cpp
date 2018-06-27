#include "departmentinfo.h"
#include <QDebug>

DepartmentInfo::DepartmentInfo(QString deptName, QString deptTel)
{
    m_deptName = deptName;
    m_deptTel = deptTel;
}

DepartmentInfo::~DepartmentInfo()
{

}

void DepartmentInfo::setDeptName(QString deptName)
{
    m_deptName = deptName;
}

void DepartmentInfo::setDeptTel(QString deptTel)
{
    m_deptTel = deptTel;
}

QString DepartmentInfo::getDeptName() const
{
    return m_deptName;
}

QString DepartmentInfo::getDeptTel() const
{
    return m_deptTel;
}

void DepartmentInfo::printInfo() const
{
    qDebug() << "--------------Department-----------------";
    qDebug() << "deptName: " << m_deptName;
    qDebug() << "deptTel: " << m_deptTel;
    qDebug() << "----------------end---------------------";
}
