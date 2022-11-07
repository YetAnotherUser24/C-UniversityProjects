#ifndef __TRIANGULO_H__
#define __TRIANGULO_H__

#include "Poligono.h"

class Triangulo : public Poligono
{
    Number base;
    Number altura;

public:
    Triangulo(Number base, Number altura);
    Number calcularArea() override;
    void dibujar() const override;
};

#endif // __TRIANGULO_H__