#include "absentinfo.h"
#include <QDebug>

AbsentInfo::AbsentInfo(QString id, QString dateStart,
           QString dateEnd, QString type)
{
    m_id = id;
    m_dateStart = dateStart;
    m_dateEnd = dateEnd;
    m_type = type;
}
AbsentInfo::~AbsentInfo()
{

}

void AbsentInfo::setID(QString id)
{
    m_id = id;
}

void AbsentInfo::setDateStart(QString dateStart)
{
    m_dateStart = dateStart;
}

void AbsentInfo::setDateEnd(QString dateEnd)
{
    m_dateEnd = dateEnd;
}

void AbsentInfo::setType(QString type)
{
    m_type = type;
}

QString AbsentInfo::getID() const
{
    return m_id;
}

QString AbsentInfo::getDateStart() const
{
    return m_dateStart;
}

QString AbsentInfo::getDateEnd() const
{
    return m_dateEnd;
}

QString AbsentInfo::getType() const
{
    return m_type;
}

void AbsentInfo::printInfo() const
{
    qDebug() << "--------------Absent-----------------";
    qDebug() << "id: " << m_id;
    qDebug() << "dateStart: " << m_dateStart;
    qDebug() << "dateEnd: " << m_dateEnd;
    qDebug() << "type: " << m_type;
    qDebug() << "----------------end---------------------";
}
