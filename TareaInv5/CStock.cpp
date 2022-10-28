#include <iostream>
#include "CStock.h"

CStock::CStock(const vector<CDisfraz> *vec)
{
    stock = vec;
}

void CStock::set_stock(CDisfraz &disfraz)
{
    string tipo = disfraz.get_tipo();
    cout << tipo;
    for (auto &e : stock)
    {
        if (e->get_tipo() == tipo)
        {
            e->set_cantidad(disfraz.get_cantidad());
        }
        else
        {
            stock.emplace_back(disfraz);
        }
    }
}

void CStock::update_stock(CDisfraz &disfraz)
{
    string tipo = disfraz.get_tipo();
    for (auto &e : stock)
    {
        if (e->get_tipo() == tipo)
        {
            e->set_cantidad(e->get_cantidad() + disfraz.get_cantidad());
        }
        else
        {
            stock.emplace_back(disfraz);
        }
    }
}

void CStock::print_stock()
{
    for (auto &e : stock)
    {
        cout << "\nDisfraz: " << e->get_tipo();
        cout << "\nPrecio: " << e->get_precio();
        cout << "\nCantidad: " << e->get_cantidad();
        cout << "\n--------------------------------\n";
    }
}