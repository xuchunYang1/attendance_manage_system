#ifndef EMPLOYEEFORM_H
#define EMPLOYEEFORM_H

#include <QWidget>

namespace Ui {
class EmployeeForm;
}

class EmployeeForm : public QWidget
{
    Q_OBJECT

public:
    explicit EmployeeForm(QWidget *parent = 0);
    ~EmployeeForm();

private slots:
    void on_pushButton_showInfo_clicked();

private:
    Ui::EmployeeForm *ui;
};

#endif // EMPLOYEEFORM_H
