#ifndef LOGIN_H
#define LOGIN_H

#include "muro.h"

#include <QMainWindow>

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    Muro* muroView;

private:
    Ui::Login *ui;

private slots:
    void InicioSesionButtonPressed();
    void on_RegisterButton_clicked();
};

#endif // LOGIN_H
