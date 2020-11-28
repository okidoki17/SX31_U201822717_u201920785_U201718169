#ifndef PUBLICATIONVIEW_H
#define PUBLICATIONVIEW_H

#include "publication.h"

#include <QWidget>

namespace Ui {
class PublicationView;
}

class PublicationView : public QWidget
{
    Q_OBJECT

public:
    explicit PublicationView(QWidget *parent = nullptr, Publication pub = Publication(), int userId = 0);
    ~PublicationView();

    void MostrarDatos();
    void MostrarComments();

private slots:
    void on_Exit_clicked();

private:
    Publication actualPub;
    int userId;
    Ui::PublicationView *ui;
};

#endif // PUBLICATIONVIEW_H
