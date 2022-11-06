#include "CCurso.h"

CCurso::CCurso(string _cod, string _nom, string _pr, int _e, int _cred)
{
    codigo = _cod;
    nombres = _nom;
    pre_requisito = _pr;
    ciclo = _e;
    creditos = _cred;
}

void CCurso::set_codigo(string _cod)
{
    codigo = _cod;
}

void CCurso::set_nombres(string _nom)
{
    nombres = _nom;
}

void CCurso::set_pre_requisito(string _pr)
{
    pre_requisito = _pr;
}

void CCurso::set_ciclo(int _e)
{
    ciclo = _e;
}

void CCurso::set_creditos(int _cred)
{
    creditos = _cred;
}

string CCurso::get_codigo()
{
    return codigo;
}

string CCurso::get_nombres()
{
    return nombres;
}

string CCurso::get_pre_requisito()
{
    return pre_requisito;
}

int CCurso::get_ciclo()
{
    return ciclo;
}

int CCurso::get_creditos()
{
    return creditos;
}

void CCurso::imprimir_datos()
{
    cout << "\n\nDatos del curso:";
    cout << "\n-------------------------------";
    cout << "\nCodigo: " << codigo;
    cout << "\nNombre: " << nombres;
    cout << "\nPrerrequisitos: " << pre_requisito;
    cout << "\nCiclo: " << ciclo;
    cout << "\nCreditos: " << creditos;
}
