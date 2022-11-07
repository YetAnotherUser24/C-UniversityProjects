#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
using namespace std;

class Alumno
{
protected:
    string codigo;
    string nombre;
    double NF;
    bool status;

public:
    virtual double nota_final() = 0;
    virtual bool aprobado() = 0;
};

#endif // ALUMNO_H
