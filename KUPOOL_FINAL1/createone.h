#ifndef CREATEONE_H
#define CREATEONE_H

#include <QDialog>

namespace Ui {
class createone;
}

class createone : public QDialog
{
    Q_OBJECT

public:
    explicit createone(QWidget *parent = nullptr);
    ~createone();

private slots:
    void on_SignUpButton_clicked();

private:
    Ui::createone *ui;
};

#endif // CREATEONE_H
