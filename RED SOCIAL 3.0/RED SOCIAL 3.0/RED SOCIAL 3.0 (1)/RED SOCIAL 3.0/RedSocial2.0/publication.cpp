#include "publication.h"
#include "list.h"
#include "manejoarchivo.h"

Publication::Publication()
{
    //comments = List<Comment>();
    //interactions = List<Interaction>();

}

void Publication::recuperarInfo(int columna){
    ManejoArchivo* archivo = new ManejoArchivo("C:/Users/oscar/Desktop/RED SOCIAL 3.0 (1)/RED SOCIAL 3.0/ArchivosQT/publications.tsv");
    string dato;

    if(columna == 1){ dato = to_string(id); }
    if(columna == 2){ dato = to_string(idUser); }
    if(columna == 3){ dato = title; }
    if(columna == 4){ dato = desc; }
    if(columna == 5){ dato = pubDate; }
    if(columna == 6){ dato = to_string(numLikes); }

    vector<string> linea = archivo->recuperar(columna,dato);

    if(linea.size() != 0){
        id = stoi(linea[0]);
        idUser = stoi(linea[1]);
        title = linea[2];
        desc = linea[3];
        pubDate = linea[4];
        numLikes = stoi(linea[5]);
    }
}

string Publication::getTitle(){return title;}
void Publication::setTitle(string a){title=a;}

string Publication::getDescrip(){return desc;}
void Publication::setDescrip(string a){desc=a;}

string Publication::getPubDate(){return pubDate;}
void Publication::setPubDat(string a){pubDate = a;}

int Publication::getNumLikes(){return numLikes;}
void Publication::setNumLikes(int a){numLikes = a;}
