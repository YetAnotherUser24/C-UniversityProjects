#include "CParalelogramo.h"
#include <iostream>

Paralelogramo::Paralelogramo(Number base, Number altura)
{
    this->base = base;
    this->altura = altura;
}

Number Paralelogramo::calcularArea()
{
    return base * altura / 2.0;
}

void Paralelogramo::dibujar() const
{
    std::cout << "dibujar triangulo\n";
}
