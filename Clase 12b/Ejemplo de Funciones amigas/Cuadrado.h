#ifndef __CUADRADO_H__
#define __CUADRADO_H__

#include <iostream>
#include "Tipos.h"
#include "Rectangulo.h"
using namespace std;
class Cuadrado
{
private:
    TipoEntero m_lado;

public:
    Cuadrado()
    {
        m_lado = 5;
    }
    void mostrar(ostream &os, Rectangulo Rect)
    {
        os << "\nLargo : " << Rect.m_largo;
        os << "\nAncho : " << Rect.m_ancho;
        os << "\nLado : " << m_lado;
    }
};
#endif // __CUADRADO_H__