#include "Elipse.h"
#include <iostream>

const double PI = 3.1416;

Elipse::Elipse(Number ejeMayor, Number ejeMenor)
{
    this->ejeMayor = ejeMayor;
    this->ejeMenor = ejeMenor;
}

Number Elipse::calcularArea()
{
    return PI * ejeMayor * ejeMenor;
}

void Elipse::dibujar() const
{
    std::cout << "draw elipse\n";
};
