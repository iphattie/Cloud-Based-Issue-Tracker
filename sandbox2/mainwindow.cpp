#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    myDB = QSqlDatabase::addDatabase("QMYSQL");
    myDB.setHostName("aws-cs3321.ciih9q6uolxf.us-east-2.rds.amazonaws.com");
    myDB.setDatabaseName("aws-cs3321");
    myDB.setUserName("admin");
    myDB.setPassword("CSUHD310343");

    if(!myDB.open())
    {
        ui->database_connection_label->setText("Not Connected to Database");
    }
    else
    {
        ui->database_connection_label->setText("Connected to Database");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

