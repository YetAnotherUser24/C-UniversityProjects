#ifndef __CCURSO_H__
#define __CCURSO_H__
#include <iostream>

using namespace std;

class CCurso
{
private:
    string codigo;
    string nombres;
    string pre_requisito;
    int ciclo;
    int creditos;

public:
    CCurso() {}
    CCurso(string, string, string, int, int);

    virtual ~CCurso() {}

    void set_codigo(string);
    void set_nombres(string);
    void set_pre_requisito(string);
    void set_ciclo(int);
    void set_creditos(int);

    string get_codigo();
    string get_nombres();
    string get_pre_requisito();
    int get_ciclo();
    int get_creditos();

    void imprimir_datos();
};
#endif // __CCURSO_H__