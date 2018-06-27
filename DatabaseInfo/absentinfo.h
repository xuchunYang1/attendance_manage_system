#ifndef ABSENTINFO_H
#define ABSENTINFO_H
#include <QString>
#include <QList>

class AbsentInfo
{
public:
    AbsentInfo(QString id, QString dateStart,
               QString dateEnd, QString type);
    virtual ~AbsentInfo();

    void setID(QString id);
    void setDateStart(QString dateStart);
    void setDateEnd(QString dateEnd);
    void setType(QString type);

    QString getID() const;
    QString getDateStart() const;
    QString getDateEnd() const;
    QString getType() const;

    void printInfo() const;

private:
    QString m_id;
    QString m_dateStart;
    QString m_dateEnd;
    QString m_type;
};
typedef QList<AbsentInfo> AbsentInfoList;
#endif // ABSENTINFO_H
