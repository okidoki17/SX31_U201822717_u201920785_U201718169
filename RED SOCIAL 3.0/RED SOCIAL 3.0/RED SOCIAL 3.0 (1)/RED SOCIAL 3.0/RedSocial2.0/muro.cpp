#include "muro.h"
#include "ui_muro.h"
#include "user.h"
#include <QMessageBox>
#include <QPushButton>
#include "login.h"
#include "manejoarchivo.h"
#include "publicationview.h"
#include <functional>
Muro::Muro(QWidget *parent, int userId) :
    QWidget(parent),
    ui(new Ui::Muro)
{
    this->userId = userId;
    ui->setupUi(this);

    QPushButton* iniciaSesionButton = Muro::findChild<QPushButton*>("ExitButton");
    connect(iniciaSesionButton,SIGNAL(clicked()),this,SLOT(ExitButtonPressed()));

    MostrarDatos();
    RecuperarPublicaciones();
}

Muro::~Muro()
{
    delete ui;
}

void Muro::MostrarDatos(){
    User* user = new User(userId);
    user->recuperarInfo(1);
    ui->Mail->setText(QString::fromStdString(user->getEmail()));
    ui->Nombre->setText(QString::fromStdString(user->getFullname()));
    ui->JoinDate->setText(QString::fromStdString(user->getRegisterDate()));
}

void Muro::ExitButtonPressed(){
    Login* loginView = new Login(nullptr);
    loginView->show();
    this->close();
}

void Muro::RecuperarPublicaciones(){
    ManejoArchivo* archivo = new ManejoArchivo("C:/Users/oscar/Desktop/RED SOCIAL 3.0 (1)/RED SOCIAL 3.0/ArchivosQT/publications.tsv");

    function<int(Publication, Publication)> comparar = [](Publication a, Publication b)->int {return a.getTitle().compare(b.getTitle()); };

    Arbol<Publication>* publications = new Arbol<Publication>(comparar);
    vector<string> publicationTitles = archivo->recuperarColumna(3);

    string info;
    for(int i=1; i<publicationTitles.size();i++){
       Publication pub = Publication();
       pub.setTitle(publicationTitles.at(i));
       publications->insertar(pub);
    }

    ui->Publications->addItem("N° | Description | PubDate | Title");

    vector<Publication> publicationsIndex = publications->getItems();

    for(int i=0; i<50;i++){
        Publication aux = publicationsIndex.at(i);
        aux.recuperarInfo(3);
        string info;
        info = aux.getDescrip() + "\t" + aux.getPubDate() + "\t"+ aux.getTitle();
        ui->Publications->addItem(QString::fromStdString(info));
    }

}

void Muro::on_pushButton_clicked()
{
    QMessageBox msg;
    Publication aux;
    string descrip;
    stringstream linea(ui->Publications->currentItem()->text().toStdString());
    getline(linea,descrip,'\t');
    linea = stringstream(descrip);

    aux.setDescrip(descrip);
    msg.setText(QString::fromStdString(aux.getDescrip()));
    msg.exec();
    PublicationView* pubView = new PublicationView(nullptr,aux,userId);
    pubView->show();
}
