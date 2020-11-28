#ifndef ARBOL_H
#define ARBOL_H

#include "nodo.h"
#include <functional>
#include <string>
#include <vector>
using namespace std;

template <class T>
class Arbol {
    typedef function<int(T, T)> Comp; //Lambda
    Nodo<T>* raiz;

    //void(*procesar)(T); //Puntero a funcion
    Comp comparar; // lambda de criterio de comparaci�n
    vector<T> items;
private:
    bool _buscar(Nodo<T>* nodo, T e) {
        if (nodo == nullptr) return false;
        else {
            int r = comparar(nodo->elemento, e);
            if (r == 0) return true;
            else if (r < 0) {
                return _buscar(nodo->der, e);
            }
            else {
                return _buscar(nodo->izq, e);
            }
        }
    }
    Nodo<T>* _obtener(Nodo<T>* nodo, T e) {
        if (nodo == nullptr) return nullptr;
        else {
            int r = comparar(nodo->elemento, e);
            if (r == 0) return nodo;
            else if (r < 0) {
                return _buscar(nodo->der, e);
            }
            else {
                return _buscar(nodo->izq, e);
            }
        }
    }
    bool _insertar(Nodo<T>*&nodo, T e) {
        if (nodo == nullptr) {
            nodo = new Nodo<T>();
            nodo->elemento = e;
            return true;
        }
        else {
            int r = comparar(nodo->elemento, e);
            if (r == 0) return false;
            else if (r < 0) {
                return _insertar(nodo->der, e);
            }
            else {
                return _insertar(nodo->izq, e);
            }
        }
    }
    bool _vacio() {
        return raiz == nullptr;
    }

    bool _eliminar(Nodo<T>*& nodo, T e) {
        if (nodo == nullptr) return false;
        else {
            int r = comparar(nodo->elemento, e);
            if (r < 0) {
                return _eliminar(nodo->der, e);
            }
            else if (r > 0) {
                return _eliminar(nodo->izq, e);
            }else { // r==0 es porque se encontr� el elemento e en el arbol
                if (nodo->der == nullptr && nodo->izq == nullptr) {//caso 1
                    nodo = nullptr;
                    delete nodo;
                    return true;
                }
                else if (nodo->izq == nullptr) { //caso 2
                    nodo = nodo->der;
                    return true;
                }
                else if (nodo->der == nullptr) { //caso 3
                    nodo = nodo->izq;
                    return true;
                }
                else { //caso 4
                    Nodo<T> *aux = nodo->der; //Se establece buscar el menor elemento por la derecha
                    while (aux->izq != nullptr)
                    {
                        aux = aux->izq; //Se obtiene la hoja menor
                    }
                    nodo->elemento = aux->elemento; //Se actualiza el elemento en el nodo raiz y
                    return _eliminar(nodo->der,aux->elemento); //se env�a a eliminar el elemento en el arbol por la derecha
                }
            }
        }
    }

    void _enOrden(Nodo<T>* nodo) {
        if (nodo == nullptr) return;
        _enOrden(nodo->izq);
        items.push_back(nodo->elemento);
        _enOrden(nodo->der);
    }

    int _cantidad(Nodo<T>* nodo) {
        //La cantidad de nodos del �rbol es:
        //	0 si es vac�o
        //	1 + la cantidad de nodos por la izquierda + la cantidad de nodos por la derecha

        if (nodo == nullptr)
            return 0;
        else
        {
            int ci, cd;
            ci = _cantidad(nodo->izq);
            cd = _cantidad(nodo->der);
            return 1 + ci + cd;
        }

    }

//    void _preOrden(Nodo<T>* nodo) {
//        if (nodo == nullptr) return;
//        procesar(nodo->elemento);
//        _preOrden(nodo->izq);
//        _preOrden(nodo->der);
//    }

//    void _postOrden(Nodo<T>* nodo) {
//        if (nodo == nullptr) return;
//        _postOrden(nodo->izq);
//        _postOrden(nodo->der);
//        procesar(nodo->elemento);
//    }



//    int _minimo(Nodo<T>* nodo) {
//        if (nodo->izq == nullptr) return nodo->elemento;
//        else
//            return _minimo(nodo->izq);
//    }
//    int _maximo(Nodo<T>* nodo) {
//        if (nodo->der == nullptr) return nodo->elemento;
//        else
//            return _maximo(nodo->der);
//    }

public:

    Arbol(void(*otroPunteroAFuncion)(T), Comp comparar) {
        this->procesar = otroPunteroAFuncion;
        this->items = vector<T>();
        this->comparar= comparar;
        //this->comparar=[](T a, T b)->int {return a - b; };
        raiz = nullptr;
    }
    Arbol(Comp comparar) {
        this->comparar= comparar;
        //this->comparar=[](T a, T b)->int {return a - b; };
        raiz = nullptr;
    }
    bool insertar(T e) {
        return _insertar(raiz, e);
    }
    bool Buscar(T e) {
        return _buscar(raiz, e);
    }
    bool Eliminar(T e) {
        return _eliminar(raiz, e);
    }
    T getRaiz(){
        return raiz->elemento;
    }
    void enOrden() {
        _enOrden(raiz);
    }
    vector<T> getItems(){
        _enOrden(raiz);
        return items;
    }
    int cantidad() {

        return _cantidad(raiz);
    }

//    void preOrden() {
//        _preOrden(raiz);
//    }
//    void postOrden() {
//        _postOrden(raiz);
//    }


//    int Minimo() {
//        return _minimo(raiz);
//    }
//    int Maximo() {
//        return _maximo(raiz);
//    }

};

#endif // ARBOL_H
