#ifndef __CPROFESOR_H__
#define __CPROFESOR_H__

#include <iostream>

using namespace std;

class CProfesor
{
private:
    string codigo;
    string nombres;
    string apellido_paterno;
    string apellido_materno;
    string correo;

public:
    CProfesor() {}
    CProfesor(string, string, string, string, string);

    virtual ~CProfesor() {}

    void set_codigo(string);
    void set_nombres(string);
    void set_apellido_paterno(string);
    void set_apellido_materno(string);
    void set_correo(string);

    string get_codigo();
    string get_nombres();
    string get_apellido_paterno();
    string get_apellido_materno();
    string get_correo();

    void imprimir_datos();
};

#endif // __CPROFESOR_H__