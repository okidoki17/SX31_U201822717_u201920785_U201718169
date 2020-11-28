#ifndef COMMENT_H
#define COMMENT_H
#include <QDateTime>
#include <iostream>
#include <string.h>
using namespace std;

class Comment
{
public:
    Comment();

    string getText();
    void setText(string a);

    string getDate();
    void setDate(string a);

    int getIdPub();
    void setIdPub(int a);

    int getId();
    void setId(int a);

    void recuperarInfo(int);
private:
    int id, idPub;
    string date;
    string text;
};

#endif // COMMENT_H
