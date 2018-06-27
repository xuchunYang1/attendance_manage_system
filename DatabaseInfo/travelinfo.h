#ifndef TRAVELINFO_H
#define TRAVELINFO_H
#include <QString>
#include <QList>

class TravelInfo
{
public:
    TravelInfo(QString id, QString timeStart,
               QString timeEnd, QString place,
               QString description);
    virtual ~TravelInfo();

    void setID(QString id);
    void setTimeStart(QString timeStart);
    void setTimeEnd(QString timeEnd);
    void setPlace(QString place);
    void setDescription(QString description);

    QString getID() const;
    QString getTimeStart() const;
    QString getTimeEnd() const;
    QString getPlace() const;
    QString getDescription() const;

    void printInfo() const;

private:
    QString m_id;
    QString m_timeStart;
    QString m_timeEnd;
    QString m_place;
    QString m_description;
};
typedef QList<TravelInfo> TravelInfoList;
#endif // TRAVELINFO_H
