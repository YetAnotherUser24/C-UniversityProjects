#ifndef TAREAGRUPALULTIMAUU_CONJUNTOPERSONAS_H
#define TAREAGRUPALULTIMAUU_CONJUNTOPERSONA_H

#include <iostream>
#include "Identificacion.h"
#include "Persona.h"
#include <iomanip>
#include <vector>

using namespace std;

class ConjuntoPersonas
{
    vector<Persona *> personas;

public:
    ConjuntoPersonas(vector<Persona *> _personas) : personas(_personas){};
    ~ConjuntoPersonas()
    {
        for (auto e : personas)
        {
            delete e;
            e = nullptr;
        }

        personas.clear();
    }

    void print()
    {
        for (auto p : personas)
        {
            cout << "\n\nNombre: " << p->nombre;
            cout << "\nTipo de identificacion: " << p->tipo_i->get_tipo();
        }
    }
    int print(int contrasena_admin)
    {
        if (contrasena_admin != 1234)
        {
            return 0;
        }

        for (auto p : personas)
        {
            cout << "\n\nNombre: " << p->nombre;
            cout << "\nTipo de identificacion: " << p->tipo_i->get_tipo();
            cout << "\nIdentificacion: " << p->tipo_i->get_iden();
        }

        return 0;
    }
    void extraer(string _nombre)
    {
        for (int i = 0; i < personas.size(); i++)
        {
            if (_nombre == personas[i]->nombre)
            {
                personas.erase(personas.begin() + i);
            }
        }
    }
    void agregar(Persona *_persona)
    {
        personas.emplace_back(_persona);
    }

    int confirmacion()
    {
        string itemp;
        string _nombre;

        cout << "\nPorfavor ingrese su nombre: \n";
        cout << "-> ";
        cin >> _nombre;

        for (int i = 0; i < personas.size(); i++)
        {
            if (_nombre == personas[i]->nombre)
            {
                cout << "\nPorfavor ingrese su tipo de identificacion: \n- HuellaDigital \n- FirmaDigital \n- IdentificacionFacial\n";
                cout << "-> ";
                cin >> itemp;

                if (itemp != personas[i]->tipo_i->get_tipo())
                {
                    cout << "\nERROR - ACCESO DENEGADO";
                    return 0;
                }

                cout << "\nPorfavor ingrese su identificacion:\n";
                cout << "-> ";
                cin >> itemp;

                if (itemp != personas[i]->tipo_i->get_iden())
                {
                    cout << "\nERROR - ACCESO DENEGADO";
                    return 0;
                }

                cout << "\nACCESO CONCEDIDO, bienvenido " << personas[i]->nombre;
                return 0;
            }
        }
        cout << "\nERROR - ACCESO DENEGADO";
        return 0;
    }
};

#endif // TAREAGRUPALULTIMAUU_CONJUNTOPERSONA_H