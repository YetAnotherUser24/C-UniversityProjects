#include <iostream>
#include "CCliente.h"

int main()
{
    auto Fantasma = new CDisfraz("Fantasma", 10.50, 30);
    auto Bruja = new CDisfraz("Bruja", 20.9, 40);
    auto Frankenstein = new CDisfraz("Frankenstein", 44.5, 20);
    auto Esqueleto = new CDisfraz("Esqueleto", 12.0, 50);
    auto Zombie = new CDisfraz("Zombie", 34.5, 10);

    auto Tienda = new CStock;
    Tienda->set_stock(Fantasma);
    Tienda->set_stock(Bruja);
    Tienda->set_stock(Frankenstein);
    Tienda->set_stock(Esqueleto);
    Tienda->set_stock(Zombie);

    Tienda->print_stock();

    string n;
    int a;

    cout << "Nombre de cliente: ";
    cin >> n;
    cout << "Antiguedad (años): ";
    cin >> a;

    auto Cliente = new CCliente(n, a);
    auto StockCliente = new CStock;
    Cliente->create_stock(StockCliente);

    Cliente->compra(Tienda);
    Cliente->mensaje();

    cout << "\nSTOCK RESTANTE EN LA TIENDA:\n";
    Tienda->print_stock();
    delete Fantasma;
    delete Bruja;
    delete Frankenstein;
    delete Esqueleto;
    delete Zombie;
    delete Tienda;
    delete Cliente;
}
