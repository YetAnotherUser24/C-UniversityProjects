//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CALIMENTO_H
#define HERENCIAANIMAL_CALIMENTO_H
#include <iostream>

using namespace std;

class CAlimento
{
private:
    string m_Nombre;
    int m_Cantidad;

public:
    CAlimento(string, int);
    ~CAlimento();
    int getCantidad();
    string getNombre();
};
#endif // HERENCIAANIMAL_CALIMENTO_H
