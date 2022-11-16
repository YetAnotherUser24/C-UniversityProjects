#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    vector<int> numeros;

    ifstream archivo("16kints.txt");
    // fstream achivo = open("ruta",ios::in,out,app)
    if (archivo.fail())
    {
        // creacion de numeros
        cout << "No existe archivo, creando numeros...";
        ofstream archivo("16kints.txt");
        for (int i = 0; i < 10; i++)
        {

            numeros.emplace_back(rand() % 20);
            archivo << numeros[i];
        }
        archivo.close();
    }
    else
    {
        // lectura de archivos
        int num;
        while (!archivo.eof())
        {
            archivo >> num;
            numeros.emplace_back(num);
        }
    }
    for (auto &n : numeros)
    {
        cout << n << "  ";
    }

    return 0;
}