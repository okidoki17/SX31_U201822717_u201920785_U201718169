#ifndef MURO_H
#define MURO_H
#include "arbol.h"
#include "publication.h"

#include <QWidget>

namespace Ui {
class Muro;
}

class Muro : public QWidget
{
    Q_OBJECT

public:
    explicit Muro(QWidget *parent = nullptr, int userId = 0);
    ~Muro();

    void MostrarDatos();
    void RecuperarPublicaciones();

private:
    int userId;
    Ui::Muro *ui;

private slots:
    void ExitButtonPressed();
    void on_pushButton_clicked();
};

#endif // MURO_H
