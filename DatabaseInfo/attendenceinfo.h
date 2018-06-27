#ifndef ATTENDENCEINFO_H
#define ATTENDENCEINFO_H

#include <QString>
#include <QList>
class AttendenceInfo
{
public:
    AttendenceInfo(QString id, QString normalStart,
                   QString normalEnd, QString factStart,
                   QString factEnd);
    virtual ~AttendenceInfo();

    void setID(QString id);
    void setNormalStart(QString normalStart);
    void setNormalEnd(QString normalEnd);
    void setFactStart(QString factStart);
    void setFactEnd(QString factEnd);

    QString getID() const;
    QString getNormalStart() const;
    QString getNormalEnd() const;
    QString getFactStart() const;
    QString getFactEnd() const;

    void printInfo() const;

private:
    QString m_id;
    QString m_normalStart;
    QString m_normalEnd;
    QString m_factStart;
    QString m_factEnd;
};
typedef QList<AttendenceInfo> AttendenceInfoList;
#endif // ATTENDENCEINFO_H
