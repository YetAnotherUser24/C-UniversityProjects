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
    Alumno(string _nombre, string _codigo) : nombre(_nombre), codigo(_codigo) {}
    ~Alumno() {}

    virtual void nota_final() = 0;
    virtual void aprobado() = 0;
    virtual string get_grado() = 0;

    double get_nota_final() { return NF; }
    bool get_status() { return status; }
    string get_nombre() { return nombre; }
    string get_codigo() { return codigo; }
};

#endif // ALUMNO_H
