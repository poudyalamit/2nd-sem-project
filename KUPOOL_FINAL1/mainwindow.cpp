#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "homepage.h"
//#include "ui_homepage.h"
#include "createone.h"
//#include "ui_createone.h"
#include "QPixmap"
#include "QMessageBox"
#include "QDesktopServices"
#include <QMainWindow> //added
#include <QSqlDatabase>
#include<QSqlQuery>
mainwindow::mainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwindow)
{
    ui->setupUi(this);
//    added
        mydb = QSqlDatabase::addDatabase("QSQLITE");

    mydb.setDatabaseName("C:/Users/ASUS/OneDrive/Desktop/KUPOOL_FINAL1/Database1.sqlite");
//    if(!mydb.open())
//        ui->loginUsernameInput->setText("Failed to open the database");
//    else
//        ui->loginUsernameInput->setText("Connected!");
    resize(630,420);
    QPixmap passicon("C:/Users/ASUS/OneDrive/Desktop/KUPOOL_FINAL1/images/lock.png");
    ui->loginPasswordIcon->setPixmap(passicon.scaled(30,30,Qt::KeepAspectRatio));

    QPixmap usernameicon("C:/Users/ASUS/OneDrive/Desktop/KUPOOL_FINAL1/images/user_green.png");
    ui->loginUsernameIcon->setPixmap(usernameicon.scaled(30,30,Qt::KeepAspectRatio));

    QPixmap kuicon("C:/Users/ASUS/OneDrive/Desktop/KUPOOL_FINAL1/images/icon.png");
    ui->icon->setPixmap(kuicon.scaled(80,80,Qt::KeepAspectRatio));

    QPixmap ku_logo("C:/Users/ASUS/OneDrive/Desktop/KUPOOL_FINAL1/images/KU_LOGO.png");
    ui->KULOGO->setPixmap(ku_logo.scaled(80,80,Qt::KeepAspectRatio));

    QPixmap windowBG("C:/Users/ASUS/OneDrive/Desktop/KUPOOL_FINAL1/images/bg.png");
    windowBG = windowBG.scaled(650,700,Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, windowBG);
    this->setPalette(palette);
}

mainwindow::~mainwindow()
{
    delete ui;
}


void mainwindow::on_loginButton_clicked()
{

    mydb = QSqlDatabase::addDatabase("QSQLITE");
    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/ASUS/OneDrive/Desktop/KUPOOL_FINAL1/Database1.sqlite");
    QString username,password; //added
     username = ui->loginUsernameInput->text();
     password = ui->loginPasswordInput->text();
     if(!mydb.isOpen()){
         qDebug()<<"Failed to open the database.";
         return;
     }
//    QSqlQuery qry;
//    if(qry.exec("select * from Info where Username= ' " + username +" '  and Password='"+password+"'")){
//      int count=0;
//  while(qry.next()){
//        count++;
//    }
//    if(count == 1)
//        ui->loginUsernameInput->setText("username and password is correct!");
//    if(count>1)
//        ui->loginUsernameInput->setText("Duplicate username and password!");
//    if(count<1)
//        ui->loginUsernameInput->setText("username and password is notcorrect!");
//    }


    }

void mainwindow::on_forgot_password_clicked()
{
    QMessageBox::warning(this,"ERROR","Contact the administration!");

}


void mainwindow::on_createAccount_clicked()
{
    createone file;
    file.setModal(true);
           close();
    file.exec();

}


