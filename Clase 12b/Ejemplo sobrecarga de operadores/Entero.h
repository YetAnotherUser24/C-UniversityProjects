#ifndef __ENTERO_H__
#define __ENTERO_H__

#include <iostream>
#include "Tipos.h"
using namespace std;
class Entero
{
private:
    TipoEntero m_dato;

public:
    Entero() {}
    Entero(TipoEntero _dato) { m_dato = _dato; }
    int getDato() { return m_dato; }
    friend Entero operator+(Entero &x, Entero &y);
    friend ostream &operator<<(ostream &o, Entero e);
};
#endif // __ENTERO_H__