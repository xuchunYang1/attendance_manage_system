#ifndef OVERTIMEINFO_H
#define OVERTIMEINFO_H
#include <QString>
#include <QList>

class OverTimeInfo
{
public:
    OverTimeInfo(QString id, QString hours,
                 QString date);
    virtual ~OverTimeInfo();

    void setID(QString id);
    void setHours(QString hours);
    void setDate(QString date);

    QString getID() const;
    QString getHours() const;
    QString getDate() const;

    void printInfo() const;
private:
    QString m_id;
    QString m_hours;
    QString m_date;
};
typedef QList<OverTimeInfo> OverTimeInfoList;
#endif // OverTimeInfo_H
