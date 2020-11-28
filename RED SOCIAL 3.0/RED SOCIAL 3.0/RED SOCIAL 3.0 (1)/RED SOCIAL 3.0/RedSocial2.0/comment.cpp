#include "comment.h"
#include "manejoarchivo.h"

#include <QMessageBox>

Comment::Comment()
{

}

string Comment::getText(){return text;}
void Comment::setText(string a){text = a;}

string Comment::getDate(){return date;}
void Comment::setDate(string a){date=a;}

int Comment::getIdPub(){return idPub;}
void Comment::setIdPub(int a){idPub=a;}

int Comment::getId(){return id;}
void Comment::setId(int a){id=a;}

void Comment::recuperarInfo(int columna){
    ManejoArchivo* archivo = new ManejoArchivo("C:/Users/oscar/Desktop/RED SOCIAL 3.0 (1)/RED SOCIAL 3.0/ArchivosQT/comment.tsv");
    string dato;

    if(columna == 1){ dato = to_string(id); }
    if(columna == 2){ dato = to_string(idPub); }
    if(columna == 3){ dato = date; }
    if(columna == 4){ dato = text; }

    vector<string> linea = archivo->recuperar(columna,dato);

    if(linea.size() != 0){
        id = stoi(linea[0]);
        idPub = stoi(linea[1]);
        date = linea[2];
        text = linea[3];
    }

}
