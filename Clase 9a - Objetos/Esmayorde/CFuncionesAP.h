#ifndef __CFUNCIONESAP_H__
#define __CFUNCIONESAP_H__

#include <iostream>

template <typename T>

auto get_mayor(T Arrob, int n)
{
    auto mayor = Arrob[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        if (Arrob[i]->esMayorDe(mayor))
        {
            mayor = Arrob[i];
        }
    }

    return mayor;
}

template <typename T>

void ordenar(T Arrob, int n)
{

    auto temp = Arrob[0];
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - i - 1; i++)
        {
            if (Arrob[i]->esMayorDe(Arrob[i + 1]))
            {
                temp = Arrob[i];
                Arrob[i] = Arrob[i + 1];
                Arrob[i + 1] = temp;
            }
        }
    }
}

template <typename T>

void imprimir(T Arrob, int n)
{
    cout << "\n[  ";
    for (int i = 0; i < n; i++)
    {
        cout << Arrob[i]->get_nombres() << "  ";
    }
    cout << "]";
}

#endif // __CFUNCIONESAP_H__