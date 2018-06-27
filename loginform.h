#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QWidget>
#include <QString>

namespace Ui {
class LoginForm;
}

class LoginForm : public QWidget
{
    Q_OBJECT
signals:
    void signalLogin(void);

public:
    explicit LoginForm(QWidget *parent = 0);
    ~LoginForm();

    QString getUID() const;
    QString getPswd() const;


private slots:
    void on_pushButton_login_clicked();

    void on_lineEdit_uid_editingFinished();

    void on_lineEdit_pswd_editingFinished();

private:
    Ui::LoginForm *ui;
    QString m_uid;
    QString m_pswd;

};

#endif // LOGINFORM_H
