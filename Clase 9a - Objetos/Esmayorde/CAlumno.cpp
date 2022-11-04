#include "CAlumno.h"

void CAlumno::set_apellidos(string _a)
{
    apellidos = _a;
}
void CAlumno::set_nombres(string _n)
{
    nombres = _n;
}
void CAlumno::set_edad(int _e)
{
    edad = _e;
}
void CAlumno::set_creditos(int _c)
{
    creditos = _c;
}

string CAlumno::get_nombres()
{
    return nombres;
}
string CAlumno::get_apellidos()
{
    return apellidos;
}
int CAlumno::get_edad()
{
    return edad;
}
int CAlumno::get_creditos()
{
    return creditos;
}

bool CAlumno::esMayorDe(CAlumno *alumno)
{
    return (nombres > alumno->get_nombres());
}