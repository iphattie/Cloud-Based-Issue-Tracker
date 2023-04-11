#ifndef LOGINUI_H
#define LOGINUI_H

#include <QDialog>
#include "mainwindow.h"
#include <QtSql>
#include <QSqlDatabase>

namespace Ui {
class LoginUI;
}

class LoginUI : public QDialog
{
    Q_OBJECT

public:
    explicit LoginUI(QWidget *parent = nullptr);
    ~LoginUI();

private slots:
    void on_login_button_clicked();

private:
    Ui::LoginUI *ui;
    MainWindow *mainWindow;
    QSqlDatabase myDB;
};

#endif // LOGINUI_H
