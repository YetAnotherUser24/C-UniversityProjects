#include <iostream>
#include "Clave.h"
#define NC "\e[0m"

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
          << "\e[0;93m" << clavesecreta.get_cadena() << NC;
     cout << "\nBinario: "
          << "\e[0;94m" << clavesecreta.get_binario() << NC;
     cout << "\nLlave: "
          << "\e[0;32m" << clavesecreta.get_llave() << NC;
}
