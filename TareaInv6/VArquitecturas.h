#ifndef __VARQUITECTURAS_H__
#define __VARQUITECTURAS_H__
#include "Red.h"
#include <vector>

class VArquitecturas
{
private:
    vector<Red *> arquitecturas;
    int instrucciones;
    int difficulty;

public:
    VArquitecturas() { difficulty = 1; }
    VArquitecturas(vector<Red *> arcs)
    {
        arquitecturas = arcs;
        difficulty = 1;
    }

    ~VArquitecturas()
    {
        for (auto e : arquitecturas)
        {
            delete e;
            e = nullptr;
        }
    }

    void add(Red *arc)
    {
        arquitecturas.emplace_back(arc);
    }

    void setStatus(string _nombre, bool _status)
    {
        for (auto e : arquitecturas)
        {
            if (_nombre == e->get_nombre())
            {
                e->setStatus(_status);
            }
        }
    }

    void setDifficultyPerInstruc(int _n)
    {
        difficulty = _n;
    }

    void setNumeroInstrucciones(int _n)
    {
        instrucciones = _n;
    }

    int getTime_executiontotal()
    {
        int total = 0;

        for (auto e : arquitecturas)
        {
            if (e->getStatus() == true)
            {
                total += e->getT_executiontotal(instrucciones) * difficulty;
            }
        }

        return total;
    }

    void printData()
    {
        string secuencia = "";
        cout << "\n\nDATOS DEL ALGORITMO";
        cout << "\n--------------------";
        cout << "\nArquitecturas: Tiempo de ejecución total (milisegundos)";
        for (auto e : arquitecturas)
        {
            if (e->getStatus() == true)
            {
                cout << "\n"
                     << e->get_nombre() << ": " << e->getT_executiontotal(instrucciones) / 1000.0 << " ms";

                secuencia = secuencia + e->get_nombre() + "  ";
            }
        }
        cout << "\n\nSecuencia: Tiempo de ejecución total (milisegundos)\n";
        cout << secuencia << ": " << getTime_executiontotal() / 1000.0 << " ms";
    }
};
#endif // __VARQUITECTURAS_H__