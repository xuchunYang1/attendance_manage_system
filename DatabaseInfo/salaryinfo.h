#ifndef SALARYINFO_H
#define SALARYINFO_H

#include <QString>
#include <QList>

class SalaryInfo
{
public:
    SalaryInfo(QString id, QString salary,
               QString bonus, QString welfare);
    virtual ~SalaryInfo();

    void setID(QString id);
    void setSalary(QString salary);
    void setBonus(QString bonus);
    void setWelfare(QString welfare);

    QString getID() const;
    QString getSalary() const;
    QString getBonus() const;
    QString getWelfare() const;

    void printInfo() const;
private:
    QString m_id;
    QString m_salary;
    QString m_bonus;
    QString m_welfare;
};
typedef QList<SalaryInfo> SalaryInfoList;
#endif // SALARYINFO_H
