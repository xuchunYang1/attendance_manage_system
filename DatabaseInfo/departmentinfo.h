#ifndef DEPARTMENTINFO_H
#define DEPARTMENTINFO_H

#include <QString>
#include <QDebug>

class DepartmentInfo
{
public:
    DepartmentInfo(QString deptName, QString deptTel);
    virtual ~DepartmentInfo();

    void setDeptName(QString deptName);
    void setDeptTel(QString deptTel);

    QString getDeptName() const;
    QString getDeptTel() const;

    void printInfo() const;

private:
    QString m_deptName;
    QString m_deptTel;
};
typedef QList<DepartmentInfo> DepartmentInfoList;

#endif // DEPARTMENTINFO_H
