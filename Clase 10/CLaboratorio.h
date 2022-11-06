#ifndef __CLABORATORIO_H__
#define __CLABORATORIO_H__

#include <iostream>

using namespace std;

class CLaboratorio
{
private:
    string codigo;
    int npiso;
    int ncomputadoras;

public:
    CLaboratorio() {}
    CLaboratorio(string, int, int);

    virtual ~CLaboratorio() {}

    void set_codigo(string);
    void set_npiso(int);
    void set_ncomputadoras(int);

    string get_codigo();
    int get_npiso();
    int get_ncomputadoras();

    void imprimir_datos();
};

#endif // __CLABORATORIO_H__