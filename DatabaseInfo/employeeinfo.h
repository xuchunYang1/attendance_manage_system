#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <QString>
#include <QList>

class EmployeeInfo
{
public:
    EmployeeInfo(QString id, QString name,
                 QString pswd, QString title,
                 QString deptName, QString tel);
    virtual ~EmployeeInfo();

    void setID(QString id);
    void setName(QString name);
    void setPswd(QString pswd);
    void setTitle(QString title);
    void setDeptName(QString deptName);
    void setTel(QString tel);

    QString getID() const;
    QString getName() const;
    QString getPswd() const;
    QString getTitle() const;
    QString getDeptName() const;
    QString getTel() const;

    void printInfo() const;

private:
    QString m_id;
    QString m_name;
    QString m_pswd;
    QString m_title;
    QString m_deptName;
    QString m_tel;
};

typedef QList<EmployeeInfo> EmployeeInfoList;

#endif // EMPLOYEEINFO_H

