#include "user.h"
#include <QMessageBox>
#include <iostream>
#include<string.h>
using namespace std;

User::User(string email,string fullname, int id){
    archivo = new ManejoArchivo("C:/Users/V330/Desktop/RED SOCIAL 3.0/ArchivosQT/users.tsv");
    this->email=email;
    this->fullname=fullname;
    this->id=id;

    //publications = List<Publication>();
    //followers = List<User>();
    //following = List<User>();
}
User::User(int id){
    archivo = new ManejoArchivo("C:/Users/oscar/Desktop/RED SOCIAL 3.0 (1)/RED SOCIAL 3.0/ArchivosQT/users.tsv");
    this->id=id;
    email="";
    fullname="";
    registerDate="";
    //publications = List<Publication>();
    //followers = List<User>();
    //following = List<User>();
}
User::User(string email){
    archivo = new ManejoArchivo("C:/Users/oscar/Desktop/RED SOCIAL 3.0 (1)/RED SOCIAL 3.0/ArchivosQT/users.tsv");
    this->email = email;
    id=0;
    email="";
    fullname="";
    registerDate="";
    //publications = List<Publication>();
    //followers = List<User>();
    //following = List<User>();
}


int User::getId(){return id;}
string User::getEmail(){return email;}
string User::getFullname(){return fullname;}
string User::getRegisterDate(){return registerDate;}

void User::setId(int a){id=a;}
void User::setEmail(string a){email=a;}
void User::setFullname(string a){fullname=a;}
void User::setRegisterDate(string a){registerDate=a;}

void User::registerUser(){
    QDateTime UTC(QDateTime::currentDateTimeUtc());
    QDateTime local(UTC.toLocalTime());
    registerDate=local.toString().toStdString();
    guardar();
}

void User::guardar(){
    QMessageBox msg;
    ofstream archivoG;
    archivoG.open("C:/Users/oscar/Desktop/RED SOCIAL 3.0 (1)/RED SOCIAL 3.0/ArchivosQT/users.tsv",ofstream::app);
    vector<string> list = archivo->recuperarColumna(3);
    id=list.size();
    archivoG<<id<<'\t'<<email<<'\t'<<fullname<<'\t'<<registerDate<<endl;
    archivoG.close();

}
void User::recuperarInfo(int columna){
    string dato;

    if(columna == 1){ dato = to_string(id); }
    if(columna == 2){ dato = email; }
    if(columna == 3){ dato = fullname; }
    if(columna == 4){ dato = registerDate; }

    vector<string> linea = archivo->recuperar(columna,dato);

    if(linea.size() != 0){
        id = stoi(linea[0]);
        email = linea[1];
        this->fullname = linea[2];
        this->registerDate = linea[3];
    }
}


