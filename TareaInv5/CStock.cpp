#include <iostream>
#include "CStock.h"

int CStock::set_stock(CDisfraz *disfraz)
{
    string tipo = "";
    tipo = disfraz->get_tipo();

    for (auto e : stock)
    {
        if (e->get_tipo() == tipo)
        {
            e->set_cantidad(disfraz->get_cantidad());
            return 0;
        }
    }
    stock.emplace_back(disfraz);
    return 0;
}

void CStock::update_stock(CDisfraz *disfraz)
{
    string tipo = "";
    tipo = disfraz->get_tipo();

    for (auto e : stock)
    {
        if (e->get_tipo() == tipo)
        {
            e->set_cantidad(e->get_cantidad() + disfraz->get_cantidad());
        }
    }
}

void CStock::print_stock()
{
    for (auto e : stock)
    {
        cout << "\nDisfraz: " << e->get_tipo();
        cout << "\nPrecio: S/." << e->get_precio();
        cout << "\nCantidad: " << e->get_cantidad();
        cout << "\n--------------------------------\n";
    }
}

vector<CDisfraz *> CStock::get_stock()
{
    return stock;
}