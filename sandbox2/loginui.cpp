#include "loginui.h"
#include "ui_loginui.h"
#include <QMessageBox>
#include <QDebug>

LoginUI::LoginUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginUI)
{
    ui->setupUi(this);

//    myDB = QSqlDatabase::addDatabase("QMYSQL");
//    myDB.setHostName("aws-cs3321.ciih9q6uolxf.us-east-2.rds.amazonaws.com");
//    myDB.setDatabaseName("aws-cs3321");
//    myDB.setUserName("admin");
//    myDB.setPassword("CSUHD310343");
}

LoginUI::~LoginUI()
{
    delete ui;
}

void LoginUI::on_login_button_clicked()
{
    QString username = ui->username_line_edit->text();
    QString password = ui->password_line_edit->text();

//    if(!myDB.isOpen())
//    {
//        qDebug() << "Failed to open DB";
//        return;
//    }

//    QSqlQuery qry;
//    if(qry.exec("SELECT * FROM UserInfo WHERE Username='"+username+"' AND Password='"+password+"'" ))
//    {
//        int count = 0;
//        while(qry.next())
//        {
//            count++;
//        }
//        if(count==1)
//        {
//                    hide();
//                    mainWindow = new MainWindow(this);
//                    mainWindow->show();
//        }
//        else
//        {
//                    ui->signin_failed_label->setText("Login Information is incorrect");
//        }
//    }
    if (username == "test" && password == "test")
    {
        //QMessageBox::information(this, "Login", "Username and password is correct");
        hide();
        mainWindow = new MainWindow(this);
        mainWindow->show();
    }
    else
    {
        ui->signin_failed_label->setText("Login Information is incorrect");
    }
}

