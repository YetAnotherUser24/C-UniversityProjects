
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string generar_clave(int n);
string generar_clave_binario(string clave);
string generar_llave(string clave_binario, int n);

int main()
{
    int n;
    string llave, clave, clave_binario;
    cout << "Numero de caracteres: ";
    cin >> n;
    clave = generar_clave(n);
    clave_binario = generar_clave_binario(clave);
    llave = generar_llave(clave_binario, n);
    cout << "\nClave: " << clave;
    cout << "\nClave binario: " << clave_binario;
    cout << "\nLlave: " << llave;
}

string generar_clave(int n)
{
    string cadena = "";
    int num, i = 1;
    char caracter;

    srand(time(0));
    do
    {
        i++;

        num = 1 + rand() % 3; // 1 - 3
        switch (num)
        {
        case 1:
            num = 65 + rand() % (91 - 65); // A - Z
            caracter = (char)num;
            break;

        case 2:
            num = 97 + rand() % (123 - 97); // a - z
            caracter = (char)num;
            break;

        case 3:
            num = rand() % (10 - 0); // 1 - 9
            caracter = to_string(num)[0];
            break;
        }
        cadena += caracter;
    } while (i <= n);

    return cadena;
}
string generar_clave_binario(string clave)
{
    string clave_binario = "";
    int digito;
    for (int i = 0; i < clave.size(); i++)
    {
        digito = int(clave[i]);
        if (digito % 2 == 0)
        {
            clave_binario += "0";
        }
        else
        {
            clave_binario += "1";
        }
    }
    return clave_binario;
}
string generar_llave(string clave_binario, int n)
{
    string llave = "";
    int p = (n * 2) - 1;
    for (int i = 0; i < n; i++)
    {
        if (clave_binario[i] == '1')
        {
            llave += "00";
        }
        else
        {
            llave += "11";
        }
    }
    if (n % 2 == 0)
    {
        llave[p] = '0';
    }
    else
    {
        llave[p] = '1';
    }
    return llave;
}
