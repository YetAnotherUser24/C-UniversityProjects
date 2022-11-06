#include "CAlumno.h"

CAlumno::CAlumno(string _cod, string _nom, string _ap, string _am, string _cor, int _e, int _cred)
{
    codigo = _cod;
    nombres = _nom;
    apellido_paterno = _ap;
    apellido_materno = _am;
    correo = _cor;
    edad = _e;
    creditos = _cred;
}

void CAlumno::set_codigo(string _cod)
{
    codigo = _cod;
}

void CAlumno::set_nombres(string _nom)
{
    nombres = _nom;
}

void CAlumno::set_apellido_paterno(string _ap)
{
    apellido_paterno = _ap;
}

void CAlumno::set_apellido_materno(string _am)
{
    apellido_materno = _am;
}

void CAlumno::set_correo(string _cor)
{
    correo = _cor;
}

void CAlumno::set_edad(int _e)
{
    edad = _e;
}

void CAlumno::set_creditos(int _cred)
{
    creditos = _cred;
}

string CAlumno::get_codigo()
{
    return codigo;
}

string CAlumno::get_nombres()
{
    return nombres;
}

string CAlumno::get_apellido_paterno()
{
    return apellido_paterno;
}

string CAlumno::get_apellido_materno()
{
    return apellido_materno;
}

string CAlumno::get_correo()
{
    return correo;
}

int CAlumno::get_edad()
{
    return edad;
}

int CAlumno::get_creditos()
{
    return creditos;
}

void CAlumno::imprimir_datos()
{
    cout << "\n\nDatos del alumno:";
    cout << "\n-------------------------------";
    cout << "\nNombres: " << nombres;
    cout << "\nApellido Paterno: " << apellido_paterno;
    cout << "\nApellido Materno: " << apellido_materno;
    cout << "\nCorreo: " << correo;
    cout << "\nEdad: " << edad;
    cout << "\nCreditos: " << creditos;
}
