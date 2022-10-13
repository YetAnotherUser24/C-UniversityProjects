#include <iostream>
#include <cstdlib>

using namespace std;

class Clave
{
private:
    int caracteres;
    string cadena;
    string binario;
    string llave;

public:
    Clave() {}
    Clave(int _caracteres)
    {
        cadena = "";
        caracteres = _caracteres;
        int i = 0;
        int num;
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
        } while (i < caracteres);
    }

    void set_binario();
    void set_llave();
    string get_cadena();
    string get_binario();
    string get_llave();
};