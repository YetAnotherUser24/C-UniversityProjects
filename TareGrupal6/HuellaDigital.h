#ifndef TAREAGRUPALULTIMAUU_HUELLADIGITAL_H
#define TAREAGRUPALULTIMAUU_HUELLADIGITAL_H

#include "Identificacion.h"

class HuellaDigital : public Identificacion
{

public:
    ~HuellaDigital() {}
    HuellaDigital(string identificacion)
    {
        _identificacion = identificacion;
    }
    string get_tipo() override
    {
        return "HuellaDigital";
    }
};

#endif // TAREAGRUPALULTIMAUU_HUELLADIGITAL_H