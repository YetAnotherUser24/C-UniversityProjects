#include "CAlumno.h"
#include <iostream>

using namespace std;

void CAlumno::setNombre(string _nombre)
{
    nombre = _nombre;
}

void CAlumno::setApellidos(string _apellidos)
{
    apellidos = _apellidos;
}

void CAlumno::setEdad(int _edad)
{
    edad = _edad;
}

void CAlumno::setCreditos(int _creditos)
{
    creditos = _creditos;
}

string CAlumno::getNombre()
{
    return nombre;
}

string CAlumno::getApellidos()
{
    return apellidos;
}

int CAlumno::getEdad()
{
    return edad;
}

int CAlumno::getCreditos()
{
    return creditos;
}
