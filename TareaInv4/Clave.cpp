#include <iostream>
#include "Clave.h"

void Clave::set_binario()
{
    binario = "";
    int digito;
    for (int i = 0; i < cadena.size(); i++)
    {
        digito = int(cadena[i]);
        if (digito % 2 == 0)
        {
            binario += "0";
        }
        else
        {
            binario += "1";
        }
    }
}

void Clave::set_llave()
{
    llave = "";
    int p = (caracteres * 2) - 1;
    for (int i = 0; i < caracteres; i++)
    {
        if (binario[i] == '1')
        {
            llave += "00";
        }
        else
        {
            llave += "11";
        }
    }
    if (caracteres % 2 == 0)
    {
        llave[p] = '0';
    }
    else
    {
        llave[p] = '1';
    }
}

string Clave::get_cadena()
{
    return cadena;
}

string Clave::get_binario()
{
    return binario;
}

string Clave::get_llave()
{
    return llave;
}