#include "CProfesor.h"

void CProfesor::set_apellidos(string _a)
{
    apellidos = _a;
}
void CProfesor::set_nombres(string _n)
{
    nombres = _n;
}
void CProfesor::set_edad(int _e)
{
    edad = _e;
}
void CProfesor::set_horas_dictado(int _c)
{
    horas_dictado = _c;
}

string CProfesor::get_nombres()
{
    return nombres;
}
string CProfesor::get_apellidos()
{
    return apellidos;
}
int CProfesor::get_edad()
{
    return edad;
}
int CProfesor::get_horas_dictado()
{
    return horas_dictado;
}

bool CProfesor::esMayorDe(CProfesor *profesor)
{
    return (nombres > profesor->get_nombres());
}
