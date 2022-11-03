#ifndef __CPROFESOR_H__
#define __CPROFESOR_H__

#include <iostream>

using namespace std;

class CProfesor
{
private:
    string nombres;
    string apellidos;
    int edad;
    int horas_dictado;

public:
    CProfesor() {}
    CProfesor(string _n, string _a, int _e, int _c) : nombres(_n), apellidos(_a), edad(_e), horas_dictado(_c) {}

    ~CProfesor() {}

    void set_nombres(string);
    void set_apellidos(string);
    void set_edad(int);
    void set_horas_dictado(int);

    string get_nombres();
    string get_apellidos();
    int get_edad();
    int get_horas_dictado();

    bool esMayorDe(CProfesor *);
};
#endif // __CPROFESOR_H__