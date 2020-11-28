#ifndef PUBLICATION_H
#define PUBLICATION_H
#include "comment.h"
#include "interaction.h"
#include "list.h"

#include <QDateTime>
#include <iostream>
#include <string.h>
using namespace std;

class Publication
{
public:
    Publication();
    void recuperarInfo(int columna);

    string getTitle();
    void setTitle(string);

    string getDescrip();
    void setDescrip(string);

    string getPubDate();
    void setPubDat(string);

    int getNumLikes();
    void setNumLikes(int);

    int getId(){return id;}
    void setId(int a){id=a;}

    int getIdUser(){return idUser;}
    void setIdUser(int a){ idUser=a;}
private:

    int id,idUser;
    string title, desc;
    string pubDate;
    int numLikes;

};

#endif // PUBLICATION_H
