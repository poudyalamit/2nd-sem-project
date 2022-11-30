#include "homepage.h"
#include "ui_homepage.h"
#include "QPixmap"
#include "QMessageBox"
homepage::homepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::homepage)
{
    ui->setupUi(this);
    QPixmap icon_main("C:/Users/ASUS/OneDrive/Desktop/KUPOOL_FINAL1/images/icon.png");
    ui->pool->setPixmap(icon_main.scaled(80,80,Qt::KeepAspectRatio));

    QPixmap icon_main123("C:/Users/ASUS/OneDrive/Desktop/KUPOOL_FINAL1/images/KU_logo.png");
    ui->log_main->setPixmap(icon_main123.scaled(80,80,Qt::KeepAspectRatio));

    //QPixmap icon_main1("C:/Users/ASUS/OneDrive/Desktop/KUPOOL_FINAL1/images/icon.png");
   // ui->label_icons->setPixmap(icon_main1.scaled(200,200,Qt::KeepAspectRatio));

    QPixmap swimming("C:/Users/ASUS/OneDrive/Desktop/KUPOOL_FINAL1/images/swimming.png");
    ui->swimming_icon->setPixmap(swimming.scaled(141,141,Qt::KeepAspectRatio));

}

homepage::~homepage()
{
    delete ui;
}

void homepage::on_show_graph_btn_clicked()
{
    QMessageBox::warning(this,"Database","Database not connected!");
}


void homepage::on_export_csv_btn_clicked()
{
     QMessageBox::warning(this,"Successful","Sucessfully purchased!");
}

