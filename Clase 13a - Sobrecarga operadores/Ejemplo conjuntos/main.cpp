#include <iostream>
#include "Conjunto.h"
using namespace std;
int main()
{
    Conjunto a;
    a.agregar_elemento(30);
    a.agregar_elemento(10);
    a.agregar_elemento(40);
    a.agregar_elemento(20);
    a.agregar_elemento(15);
    // Usando el operador << sobrecargado
    Conjunto b;
    b << 3;
    b << 25;
    b << 10;
    b << 40;
    Conjunto c;
    c << 4;
    c << 5;
    c << 10;
    c << 60;

    cout << "Conjunto a: " << a << "\n";
    cout << "Conjunto b: " << b << "\n";
    cout << "Conjunto c: " << c << "\n";

    auto u1 = b + a;
    cout << "Conjunto b + a: " << u1 << "\n";

    auto u2 = (a - b) + (a * b) + (b - a);
    cout << "Conjunto (a - b) + (a * b) + (b - a): " << u2 << "\n";

    // Diferencia simetrica
    auto ds = (a + b) - (a * b);
    cout << "Diferencia simetrica: " << ds << std::endl;

    // Ley distributiva
    auto c1 = a * (b + c);
    auto c2 = a * b + a * c;
    cout << "Ley distributiva: " << c1 << " = " << c2 << "\n";

    return 0;
}
