#include "travelinfo.h"
#include <QDebug>

TravelInfo::TravelInfo(QString id, QString timeStart,
           QString timeEnd, QString place,
           QString description)
{
     m_id = id;
     m_timeStart = timeStart;
     m_timeEnd = timeEnd;
     m_place = place;
     m_description = description;
}
TravelInfo::~TravelInfo()
{

}

void TravelInfo::setID(QString id)
{
    m_id = id;
}

void TravelInfo::setTimeStart(QString timeStart)
{
    m_timeStart = timeStart;
}

void TravelInfo::setTimeEnd(QString timeEnd)
{
    m_timeEnd = timeEnd;
}

void TravelInfo::setPlace(QString place)
{
    m_place = place;
}

void TravelInfo::setDescription(QString description)
{
    m_description = description;
}

QString TravelInfo::getID() const
{
    return m_id;
}

QString TravelInfo::getTimeStart() const
{
    return m_timeStart;
}

QString TravelInfo::getTimeEnd() const
{
    return m_timeEnd;
}

QString TravelInfo::getPlace() const
{
    return m_place;
}

QString TravelInfo::getDescription() const
{
    return m_description;
}

void TravelInfo::printInfo() const
{
    qDebug() << "--------------Travel-----------------";
    qDebug() << "id: " << m_id;
    qDebug() << "timeStart: " << m_timeStart;
    qDebug() << "timeEnd: " << m_timeEnd;
    qDebug() << "place: " << m_place;
    qDebug() << "description: " << m_description;
    qDebug() << "----------------end---------------------";
}

