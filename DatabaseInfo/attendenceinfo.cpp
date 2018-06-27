#include "attendenceinfo.h"
#include <QDebug>

AttendenceInfo::AttendenceInfo(QString id, QString normalStart,
               QString normalEnd, QString factStart,
               QString factEnd)
{
    m_id = id;
    m_normalStart = normalStart;
    m_normalEnd = normalEnd;
    m_factStart = factStart;
    m_factEnd = factEnd;
}

AttendenceInfo::~AttendenceInfo()
{

}

void AttendenceInfo::setID(QString id)
{
    m_id = id;
}

void AttendenceInfo::setNormalStart(QString normalStart)
{
    m_normalStart = normalStart;
}

void AttendenceInfo::setNormalEnd(QString normalEnd)
{
    m_normalEnd = normalEnd;
}

void AttendenceInfo::setFactStart(QString factStart)
{
    m_factStart = factStart;
}

void AttendenceInfo::setFactEnd(QString factEnd)
{
    m_factEnd = factEnd;
}

QString AttendenceInfo::getID() const
{
    return m_id;
}

QString AttendenceInfo::getNormalStart() const
{
    return m_normalStart;
}

QString AttendenceInfo::getNormalEnd() const
{
    return m_normalEnd;
}

QString AttendenceInfo::getFactStart() const
{
    return m_factStart;
}

QString AttendenceInfo::getFactEnd() const
{
    return m_factEnd;
}

void AttendenceInfo::printInfo() const
{
    qDebug() << "--------------Attendence-----------------";
    qDebug() << "id: " << m_id;
    qDebug() << "normalStart: " << m_normalStart;
    qDebug() << "normalEnd: " << m_normalEnd;
    qDebug() << "factStart: " << m_factStart;
    qDebug() << "factEnd: " << m_factEnd;
    qDebug() << "----------------end---------------------";
}

