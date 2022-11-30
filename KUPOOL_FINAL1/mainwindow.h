#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//added
#include <QSql>
#include <QDebug>
#include <QFileInfo>
#include <QSqlDatabase>
////ended
QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow; }
QT_END_NAMESPACE

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = nullptr);
    ~mainwindow();

private slots:
    void on_loginButton_clicked();

    void on_forgot_password_clicked();

    void on_createAccount_clicked();

    void on_createaccount1_clicked();

private:
    Ui::mainwindow *ui;
    QSqlDatabase mydb;  //added
};
#endif // MAINWINDOW_H
