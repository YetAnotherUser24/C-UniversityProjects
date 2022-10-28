#include <iostream>
#include "CDisfraz.h"

CDisfraz::CDisfraz(string _tipo, double _precio, int _cantidad)
{
    tipo = _tipo;
    precio = _precio;
    cantidad = _cantidad;
}

void CDisfraz::set_tipo(string _tipo)
{
    tipo = _tipo;
}

void CDisfraz::set_precio(double _precio)
{
    precio = _precio;
}

void CDisfraz::set_cantidad(int _cantidad)
{
    cantidad = _cantidad;
}

string CDisfraz::get_tipo()
{
    return tipo;
}

double CDisfraz::get_precio()
{
    return precio;
}

int CDisfraz::get_cantidad()
{
    return cantidad;
}