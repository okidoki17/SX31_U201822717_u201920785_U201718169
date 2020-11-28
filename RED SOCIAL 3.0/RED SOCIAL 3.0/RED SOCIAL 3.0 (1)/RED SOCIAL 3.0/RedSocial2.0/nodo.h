#ifndef NODO_H
#define NODO_H

template <class T>
class Nodo {
public:
    T elemento;
    Nodo* izq;
    Nodo* der;
};

#endif // NODO_H
