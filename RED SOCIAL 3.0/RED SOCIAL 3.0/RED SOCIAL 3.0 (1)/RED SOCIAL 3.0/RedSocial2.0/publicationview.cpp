#include "manejoarchivo.h"
#include "publicationview.h"
#include "ui_publicationview.h"

#include <QMessageBox>

PublicationView::PublicationView(QWidget *parent,Publication pub, int userId) :
    QWidget(parent),
    ui(new Ui::PublicationView)
{
    ui->setupUi(this);
    this->actualPub = pub;
    this->userId = userId;

    MostrarDatos();
    MostrarComments();
}

PublicationView::~PublicationView()
{
    delete ui;
}

void PublicationView::MostrarDatos(){
    actualPub.recuperarInfo(4);
    ui->Title->setText(QString::fromStdString(actualPub.getTitle()));
    ui->Desc->setText(QString::fromStdString(actualPub.getDescrip()));
    ui->PubDate->setText(QString::fromStdString(actualPub.getPubDate()));
    ui->NumLikes->setText(QString::number(actualPub.getNumLikes()));
}
void PublicationView::MostrarComments(){
    ManejoArchivo* archivo = new ManejoArchivo("C:/Users/oscar/Desktop/RED SOCIAL 3.0 (1)/RED SOCIAL 3.0/ArchivosQT/comment.tsv");

    vector<string> commentsText = archivo->recuperarColumna(4);

    ui->Comments->addItem("Text | Date");

    vector<Comment> actualComments;

    for(int i=1; i<commentsText.size();i++){
        Comment aux = Comment();
        aux.setText(commentsText.at(i));
        aux.recuperarInfo(4);

        if(aux.getIdPub() == actualPub.getId()){
            actualComments.push_back(aux);
        }
    }

    for(int i=0;i<actualComments.size();i++){
        Comment aux = actualComments.at(i);
        string info;
        info = aux.getText() + "\t" + aux.getDate();
        ui->Comments->addItem(QString::fromStdString(info));
    }

}

void PublicationView::on_Exit_clicked()
{
    this->close();
}
