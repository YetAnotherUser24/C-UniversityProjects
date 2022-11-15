#ifndef TAREAGRUPALULTIMAUU_PERSONA_H
#define TAREAGRUPALULTIMAUU_PERSONA_H
#include <iostream>
#include "FirmaDigital.h"
#include "HuellaDigital.h"
#include "IFacial.h"

using namespace std;

class Persona
{
    string nombre;
    Identificacion *tipo_i;

public:
    friend class ConjuntoPersonas;

    Persona(string _nombre, string _Tide)
    {
        tipo_i = new Identificacion();
        nombre = _nombre;
        cambio_identificacion(_Tide);
    }
    ~Persona()
    {
        delete tipo_i;
        tipo_i = nullptr;
    }

    void cambio_identificacion(string _tipo)
    {
        if (_tipo == "HuellaDigital")
        {
            tipo_i = new HuellaDigital(tipo_i->get_iden());
        }
        else if (_tipo == "IdentificacionFacial")
        {
            tipo_i = new Ifacial(tipo_i->get_iden());
        }
        else
        {
            tipo_i = new FirmaDigital(tipo_i->get_iden());
        }
    }
};

#endif // TAREAGRUPALULTIMAUU_PERSONA_H