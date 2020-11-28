#ifndef INTERACTION_H
#define INTERACTION_H

#include <QDateTime>



class Interaction
{
public:
    Interaction();
private:
    int idPub, idUser;
    QDateTime date;
    bool share;
};

#endif // INTERACTION_H
