#ifndef CONJUNTO_CONJUNTO_H
#define CONJUNTO_CONJUNTO_H

#include <iostream>
#include <vector>
#include "Util.h"
using namespace std;

class Conjunto
{
    vector<TypeElemento> elementos;
    friend ostream &operator<<(ostream &output, Conjunto &c); //--- Para qué?
public:
    // Agregar Elementos
    void agregar_elemento(const TypeElemento &value);
    void operator<<(const TypeElemento &value);

    // Operaciones
    Conjunto operator+(const Conjunto &other); // Union       u1 = b + a;
    Conjunto operator-(const Conjunto &other); // Diferencia   u2 = b - a;
    Conjunto operator*(const Conjunto &other); // Interseccion u3 = b * a;
};
#endif // CONJUNTO_CONJUNTO_H
