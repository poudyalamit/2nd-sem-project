#include "createone.h"
#include "ui_createone.h"
#include "QMessageBox"
#include <QSqlDatabase>//added
#include <QSqlQuery>
createone::createone(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createone)
{
ui->setupUi(this);
    resize(400,400);
    QPixmap windowBG("C:/Users/ASUS/OneDrive/Desktop/KUPOOL_FINAL1/images/bg.png");
    windowBG = windowBG.scaled(1000,1000,Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, windowBG);
    this->setPalette(palette);

    ui->setupUi(this);
}

createone::~createone()
{
    delete ui;
}

void createone::on_SignUpButton_clicked()
{
//    QString firstname=ui->firstname->text();
//    QString lastname=ui->lastname->text();
//    QString Department=ui->Department->text();
//    QString PhoneNumber=ui->phno->text();
//    QString Password=ui->password->text();
//    QString email=ui->email->text();
//    QString username=ui->lineEdit->text();

    //added

    //Connecting to MySQL database
    QSqlDatabase database=QSqlDatabase::addDatabase("QSQLITE");
     database.setDatabaseName("C:/Users/ASUS/OneDrive/Desktop/QT/RentUS/Database/mydb.sqlite");

    if (ui->firstname->text().isEmpty() || ui->lastname->text().isEmpty() || ui->Department->text().isEmpty() || ui->phno->text().isEmpty() || ui->email->text().isEmpty() || ui->password->text().isEmpty() || ui->lineEdit->text().isEmpty())
    {
        QMessageBox::warning(this, "Empty", "One or more fields empty");

    }

    else
    {
        database.open();
   //Retrieve Data from Input Fields

        QString firstname = ui->firstname->text();
        QString lastname = ui->lastname->text();
        QString department = ui->Department->text();
        QString phoneNumber = ui->phno->text();
        QString email = ui->email->text();
        QString password = ui->password->text();
        QString username  = ui->lineEdit->text();

//        //Run Our Insert Query

          QSqlQuery qry;

          qry.prepare("INSERT INTO user_detailss(username, email, password, age, contact, gender, address)"
                      "VALUES "
                      "('"+firstname+"', '"+lastname+"','"+department+"', '"+phoneNumber+"', '"+email+"', '"+password+"', '"+username+"')");

        qry.bindValue(":username", username);
        qry.bindValue(":email", email);
        qry.bindValue(":password", password);
        qry.bindValue(":lastname", lastname);
        qry.bindValue(":firstname", firstname);
        qry.bindValue(":phonenumber", phoneNumber);
        qry.bindValue(":department",department);

        if(qry.exec())
        {
            this->close();
            QMessageBox::information(this, "Inserted", "Succesfully Registered. Proceed to Login");

       } else
        {
            QMessageBox::information(this, "Not Connected", "Database is Not connected");
        }
}
    database.close();

}




