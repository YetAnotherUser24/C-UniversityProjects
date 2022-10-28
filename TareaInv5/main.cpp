#include <iostream>
#include "CStock.h"

int main()
{
    CDisfraz Fantasma("Fantasma", 10.50, 30);
    CDisfraz Bruja("Bruja", 20, 40);
    CDisfraz Frankenstein("Frankenstein", 30, 20);
    CDisfraz Esqueleto("Esqueleto", 12, 50);
    CDisfraz Zombie("Zombie", 34, 10);

    CStock Tienda;
    Tienda.set_stock(Fantasma);
    Tienda.set_stock(Bruja);
    Tienda.set_stock(Frankenstein);
    Tienda.set_stock(Esqueleto);
    Tienda.set_stock(Zombie);
    Tienda.print_stock();
}