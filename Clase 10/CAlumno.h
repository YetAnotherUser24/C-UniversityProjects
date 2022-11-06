#ifndef __CALUMNO_H__
#define __CALUMNO_H__

#include <iostream>

using namespace std;

class CAlumno
{
private:
    string codigo;
    string nombres;
    string apellido_paterno;
    string apellido_materno;
    string correo;
    int edad;
    int creditos;

public:
    CAlumno() {}
    CAlumno(string, string, string, string, string, int, int);

    virtual ~CAlumno() {}

    void set_codigo(string);
    void set_nombres(string);
    void set_apellido_paterno(string);
    void set_apellido_materno(string);
    void set_correo(string);
    void set_edad(int);
    void set_creditos(int);

    string get_codigo();
    string get_nombres();
    string get_apellido_paterno();
    string get_apellido_materno();
    string get_correo();
    int get_edad();
    int get_creditos();

    void imprimir_datos();
};

#endif // __CALUMNO_H__