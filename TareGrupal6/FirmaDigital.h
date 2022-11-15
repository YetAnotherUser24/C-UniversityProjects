#ifndef TAREAGRUPALULTIMAUU_FIRMADIGITAL_H
#define TAREAGRUPALULTIMAUU_FIRMADIGITAL_H

#include "Identificacion.h"

class FirmaDigital : public Identificacion
{

public:
    ~FirmaDigital() {}
    FirmaDigital(string identificacion)
    {
        _identificacion = identificacion;
    }
    string get_tipo() override { return "FirmaDigital"; }
};

#endif // TAREAGRUPALULTIMAUU_FIRMADIGITAL_H
