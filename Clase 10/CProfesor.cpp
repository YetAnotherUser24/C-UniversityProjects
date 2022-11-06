#include "CProfesor.h"

CProfesor::CProfesor(string _cod, string _nom, string _ap, string _am, string _cor)
{
    codigo = _cod;
    nombres = _nom;
    apellido_paterno = _ap;
    apellido_materno = _am;
    correo = _cor;
}

void CProfesor::set_codigo(string _cod)
{
    codigo = _cod;
}

void CProfesor::set_nombres(string _nom)
{
    nombres = _nom;
}

void CProfesor::set_apellido_paterno(string _ap)
{
    apellido_paterno = _ap;
}

void CProfesor::set_apellido_materno(string _am)
{
    apellido_materno = _am;
}

void CProfesor::set_correo(string _cor)
{
    correo = _cor;
}
string CProfesor::get_codigo()
{
    return codigo;
}

string CProfesor::get_nombres()
{
    return nombres;
}

string CProfesor::get_apellido_paterno()
{
    return apellido_paterno;
}

string CProfesor::get_apellido_materno()
{
    return apellido_materno;
}

string CProfesor::get_correo()
{
    return correo;
}

void CProfesor::imprimir_datos()
{
    cout << "\n\nDatos del profesor:";
    cout << "\n-------------------------------";
    cout << "\nNombres: " << nombres;
    cout << "\nApellido Paterno: " << apellido_paterno;
    cout << "\nApellido Materno: " << apellido_materno;
    cout << "\nCorreo: " << correo;
}
