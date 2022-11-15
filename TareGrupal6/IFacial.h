

#ifndef TAREAGRUPALULTIMAUU_IFACIAL_H
#define TAREAGRUPALULTIMAUU_IFACIAL_H

#include "Identificacion.h"
class Ifacial : public Identificacion
{

public:
    ~Ifacial() {}
    Ifacial(string identificacion)
    {
        _identificacion = identificacion;
    }
    string get_tipo() override
    {
        return "IdentificacionFacial";
    }
};

#endif // TAREAGRUPALULTIMAUU_IFACIAL_H
