#include "CLaboratorio.h"

CLaboratorio::CLaboratorio(string _cod, int _p, int _comp)
{
    codigo = _cod;
    npiso = _p;
    ncomputadoras = _comp;
}

void CLaboratorio::set_codigo(string _cod)
{
    codigo = _cod;
}

void CLaboratorio::set_npiso(int _p)
{
    npiso = _p;
}

void CLaboratorio::set_ncomputadoras(int _comp)
{
    ncomputadoras = _comp;
}

string CLaboratorio::get_codigo()
{
    return codigo;
}

int CLaboratorio::get_npiso()
{
    return npiso;
}

int CLaboratorio::get_ncomputadoras()
{
    return ncomputadoras;
}

void CLaboratorio::imprimir_datos()
{
    cout << "\n\nDatos del laboratorio:";
    cout << "\n-------------------------------";
    cout << "\nCodigo: " << codigo;
    cout << "\nNumero de piso: " << npiso;
    cout << "\nNumero de computadoras: " << ncomputadoras;
}
