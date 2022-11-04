#ifndef __CALUMNO_H__
#define __CALUMNO_H__

#include <iostream>

using namespace std;

class CAlumno
{
private:
    string nombres;
    string apellidos;
    int edad;
    int creditos;

public:
    CAlumno() {}
    CAlumno(string _n, string _a, int _e, int _c) : nombres(_n), apellidos(_a), edad(_e), creditos(_c) {}

    ~CAlumno() {}

    void set_nombres(string);
    void set_apellidos(string);
    void set_edad(int);
    void set_creditos(int);

    string get_nombres();
    string get_apellidos();
    int get_edad();
    int get_creditos();

    bool esMayorDe(CAlumno *);
};
#endif // __CALUMNO_H__
