#include "createone.h"
#include "ui_createone.h"
#include "QMessageBox"

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
    QString firstname=ui->firstname->text();
    QString lastname=ui->lastname->text();
    QString Department=ui->Department->text();
    QString PhoneNumber=ui->phno->text();
    QString Password=ui->password->text();
    QString email=ui->email->text();




}

