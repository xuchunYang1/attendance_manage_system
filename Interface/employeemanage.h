#ifndef EMPLOYEEMANAGE_H
#define EMPLOYEEMANAGE_H

#include <QWidget>
#include "DatabaseInfo/employeeinfo.h"
namespace Ui {
class EmployeeManage;
}

class EmployeeManage : public QWidget
{
    Q_OBJECT

signals:
    void signalReturnMainW();
public slots:
    void slotShowEmployeeW();

public:
    explicit EmployeeManage(QWidget *parent = 0);
    ~EmployeeManage();

    void setHeaders(int row, int col);

private slots:
    void on_commandLinkButton_returnMainW_clicked();

    void on_pushButton_viewAll_clicked();

    void on_lineEdit_uid_editingFinished();

    void on_lineEdit_name_editingFinished();

    void on_pushButton_search_clicked();

private:
    Ui::EmployeeManage *ui;
    QString m_getUid;
    QString m_getName;
    EmployeeInfoList *list;
};

#endif // EMPLOYEEMANAGE_H
