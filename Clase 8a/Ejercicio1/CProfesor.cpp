#include "CProfesor.h"
#include <iostream>

using namespace std;

void CProfesor::setNombre(string _nombre)
{
    nombre = _nombre;
}

void CProfesor::setApellidos(string _apellidos)
{
    apellidos = _apellidos;
}

void CProfesor::setEdad(int _edad)
{
    edad = _edad;
}

void CProfesor::setHorasDictadas(int _horasdictadas)
{
    horasdictadas = _horasdictadas;
}

string CProfesor::getNombre()
{
    return nombre;
}

string CProfesor::getApellidos()
{
    return apellidos;
}

int CProfesor::getEdad()
{
    return edad;
}

int CProfesor::getHorasDictadas()
{
    return horasdictadas;
}
