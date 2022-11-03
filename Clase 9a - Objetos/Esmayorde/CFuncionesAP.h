#ifndef __CFUNCIONESAP_H__
#define __CFUNCIONESAP_H__

template <typename T>

T get_mayor(T Arrob, int n)
{
    T mayor;
    mayor = Arrob[n];
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
    T temp;
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

#endif // __CFUNCIONESAP_H__