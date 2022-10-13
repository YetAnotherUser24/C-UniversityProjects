#include <iostream>
#include "Clave.h"
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
using namespace std;

int main()
{
    int n;
    cout << "Numero de caracteres: ";
    cin >> n;
    Clave clavesecreta(n);
    clavesecreta.set_binario();
    clavesecreta.set_llave();

    cout << "\nCadena original: "
         << RED << clavesecreta.get_cadena() << NC;
    cout << "\nBinario: "
         << GRN << clavesecreta.get_binario() << NC;
    cout << "\nLlave: "
         << CYN << clavesecreta.get_llave() << NC;
}