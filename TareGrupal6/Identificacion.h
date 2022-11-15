#ifndef TAREAGRUPALULTIMAUU_IDENTIFICACION_H
#define TAREAGRUPALULTIMAUU_IDENTIFICACION_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
using namespace std;

class Identificacion
{
protected:
    string _identificacion = "";

public:
    Identificacion()
    {
        // clave aleatoria
        for (int i = 0; i < 8; i++)
        {
            _identificacion += char(48 + rand() % 2);
        }
    }
    ~Identificacion() {}
    virtual string get_tipo() { return "undefined"; }

    void set_iden(string i) { _identificacion = i; }
    virtual string get_iden() { return _identificacion; }
};

#endif // TAREAGRUPALULTIMAUU_IDENTIFICACION_H