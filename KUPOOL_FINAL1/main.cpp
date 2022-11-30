#include "mainwindow.h"
#include "homepage.h"
#include "createone.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainwindow w;
    w.show();

    homepage h;
//    h.show();

    createone k;
//    k.show();
    return a.exec();
}
