#include "register.h"
#include "ui_register.h"
#include "user.h"

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_Register_2_clicked()
{
    User newUser = User(ui->Email->text().toStdString());
    newUser.setFullname(ui->FullName->text().toStdString());
    newUser.registerUser();
    this->close();
}
