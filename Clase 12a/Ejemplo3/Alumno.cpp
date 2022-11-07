#include "Alumno.h"

Alumno &Alumno::operator+=(Alumno alu)
{
    this->edad += alu.getEdad();
    return *this;
}
