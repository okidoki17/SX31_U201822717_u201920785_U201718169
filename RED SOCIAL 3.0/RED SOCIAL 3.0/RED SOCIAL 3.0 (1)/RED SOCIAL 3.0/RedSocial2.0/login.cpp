#include "login.h"
#include "register.h"
#include "ui_login.h"
#include "user.h"

#include <QMessageBox>

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QPushButton* iniciaSesionButton = Login::findChild<QPushButton*>("InicioSesionButton");
    connect(iniciaSesionButton,SIGNAL(clicked()),this,SLOT(InicioSesionButtonPressed()));
}

Login::~Login()
{
    delete ui;
}

void Login::InicioSesionButtonPressed(){
    QMessageBox msg;

    User* user = new User(ui->Mail->text().toStdString());
    user->recuperarInfo(2);

    if(user->getId() != 0){
        muroView = new Muro(nullptr,user->getId());
        msg.setText("BIENVENIDO");
        msg.exec();
        muroView->show();
        this->close();
    }else{
        msg.setText("MAIL NO EXISTE");
        msg.exec();
    }
}

void Login::on_RegisterButton_clicked()
{
    Register* registerView = new Register();
    registerView->show();
}
