#ifndef ALUMNO_H
#define ALUMNO_H

#include "tipos.h"
class Alumno
{
private:
    entero edad;

public:
    Alumno()
    {
        edad = 0;
    };
    Alumno(entero edad)
    {
        this->edad = edad;
    };

    entero getEdad()
    {
        return this->edad;
    };
    Alumno &operator+=(Alumno alu);
};

#endif // ALUMNO_H
