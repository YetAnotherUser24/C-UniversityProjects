#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    fstream archivo("frase.txt", ios::in);

    if (!archivo.fail())
    {
        string linea;
        string vocales = "aeiou";
        vector<int> repeticiones(5);
        fstream vocalarchivo("vocales.txt", ios::out);

        while (!archivo.eof())
        {
            getline(archivo, linea, '*');
            for (int i = 0; i < linea.size(); i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (linea[i] == vocales[j])
                    {
                        repeticiones[j] += 1;
                    }
                }
            }
        }

        linea = "";

        for (int i = 0; i < 5; i++)
        {
            vocalarchivo << vocales[i];
            vocalarchivo << " : ";
            vocalarchivo << repeticiones[i];
            vocalarchivo << "\n";
        }
        vocalarchivo.close();
    }

    else
    {
        fstream archivo("frase.txt", ios::out);
        string linea = "";

        for (int i = 0; i < 10; i++)
        {
            linea += char(65 + rand() % (65 - 89 + 1));
            linea += '\n';
            archivo << linea;
            linea = "";
        }
        archivo.close();
    }
}