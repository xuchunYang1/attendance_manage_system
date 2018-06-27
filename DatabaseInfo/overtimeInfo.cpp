#include "overtimeInfo.h"
#include <QDebug>

OverTimeInfo::OverTimeInfo(QString id, QString hours,
             QString date)
{
    m_id = id;
    m_hours = hours;
    m_date = date;
}

OverTimeInfo::~OverTimeInfo()
{

}

void OverTimeInfo::setID(QString id)
{
    m_id = id;
}

void OverTimeInfo::setHours(QString hours)
{
    m_hours = hours;
}

void OverTimeInfo::setDate(QString date)
{
    m_date = date;
}

QString OverTimeInfo::getID() const
{
    return m_id;
}

QString OverTimeInfo::getHours() const
{
    return m_hours;
}

QString OverTimeInfo::getDate() const
{
    return m_date;
}

void OverTimeInfo::printInfo() const
{
    qDebug() << "--------------OverTime-----------------";
    qDebug() << "id: " << m_id;
    qDebug() << "hours: " << m_hours;
    qDebug() << "date: " << m_date;
    qDebug() << "----------------end---------------------";
}

