#ifndef USER_H
#define USER_H
#include "list.h"
#include "manejoarchivo.h"
#include "publication.h"

#include <QDateTime>
#include<iostream>
#include <string.h>
using namespace std;

class User
{
public:
    User(string email, string fullname,int id);
    User(int id);
    User(string email);
    void recuperarInfo(int columna);
    void guardar();

    int getId();
    string getEmail();
    string getFullname();
    string getRegisterDate();

    void setId(int);
    void setEmail(string);
    void setFullname(string);
    void setRegisterDate(string);

    void registerUser();
private:

    ManejoArchivo* archivo;
    int id;
    string email, fullname,registerDate;
    //List<Publication> publications;
    //List<User> followers;
    //List<User> following;
};

#endif // USER_H
