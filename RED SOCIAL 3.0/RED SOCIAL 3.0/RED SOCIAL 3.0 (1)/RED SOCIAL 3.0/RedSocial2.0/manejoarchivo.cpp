#include "manejoarchivo.h"

ManejoArchivo::ManejoArchivo(string direc)
{
    this->direc=direc;
}

vector<string> ManejoArchivo::recuperar(int c, string dato){
    //C -> COLUMNA
    //DATO -> DATO A COMPARAR

    string linea;

    archivo.open(this->direc,ios::in);

    if(archivo.fail())
        return vector<string>();

    while(getline(archivo,linea)){
        stringstream datosUsuario(linea);
        vector<string> datos;
        string palabra;

        while (getline(datosUsuario, palabra, '\t')) {
            datos.push_back(palabra);
        }

        if(datos[c-1].compare(dato) == 0){
            return datos;
        }
    }

    archivo.close();
    return vector<string>();
}

vector<string> ManejoArchivo::recuperarColumna(int c){
    string linea;
    vector<string> datos;
    archivo.open(this->direc,ios::in);

    if(archivo.fail())
        return vector<string>();

    while(getline(archivo,linea)){
        int col = 0;
        stringstream datosUsuario(linea);
        string palabra;

        while (getline(datosUsuario, palabra, '\t')) {
            if(col == c-1){
                datos.push_back(palabra);
            }
            col++;
        }
    }
    archivo.close();
    return datos;
}
