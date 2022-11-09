#ifndef __RECTANGULO_H__
#define __RECTANGULO_H__

#include "tipos.h"
class Rectangulo
{
private:
    TipoEntero m_largo;
    TipoEntero m_ancho;

public:
    Rectangulo()
    {
        m_largo = 10;
        m_ancho = 20;
    }
    friend class Cuadrado;
};
#endif // __RECTANGULO_H__