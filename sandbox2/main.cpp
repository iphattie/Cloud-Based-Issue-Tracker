#include "loginui.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginUI w;
    w.show();
    return a.exec();
}
