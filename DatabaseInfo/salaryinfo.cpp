#include "salaryinfo.h"
#include <QDebug>

SalaryInfo::SalaryInfo(QString id, QString salary,
           QString bonus, QString welfare)
{
    m_id = id;
    m_salary = salary;
    m_bonus = bonus;
    m_welfare = welfare;
}
SalaryInfo::~SalaryInfo()
{

}

void SalaryInfo::setID(QString id)
{
    m_id = id;
}

void SalaryInfo::setSalary(QString salary)
{
    m_salary = salary;
}

void SalaryInfo::setBonus(QString bonus)
{
    m_bonus = bonus;
}

void SalaryInfo::setWelfare(QString welfare)
{
    m_welfare = welfare;
}

QString SalaryInfo::getID() const
{
    return m_id;
}

QString SalaryInfo::getSalary() const
{
    return m_salary;
}

QString SalaryInfo::getBonus() const
{
    return m_bonus;
}

QString SalaryInfo::getWelfare() const
{
    return m_welfare;
}

void SalaryInfo::printInfo() const
{
    qDebug() << "--------------Salary-----------------";
    qDebug() << "id: " << m_id;
    qDebug() << "salary: " << m_salary;
    qDebug() << "bonus: " << m_bonus;
    qDebug() << "welfare: " << m_welfare;
    qDebug() << "----------------end---------------------";
}

