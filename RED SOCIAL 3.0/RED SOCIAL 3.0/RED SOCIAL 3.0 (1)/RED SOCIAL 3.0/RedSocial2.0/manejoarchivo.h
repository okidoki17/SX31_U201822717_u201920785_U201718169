#ifndef MANEJOARCHIVO_H
#define MANEJOARCHIVO_H
#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class ManejoArchivo
{
public:
    ManejoArchivo(string direc);
    vector<string> recuperar(int c,string dato);
    vector<string> recuperarColumna(int c);

private:
    string direc;
    ifstream archivo;
};

#endif // MANEJOARCHIVO_H
