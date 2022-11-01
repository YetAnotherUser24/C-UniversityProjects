
//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CANIMAL_H
#define HERENCIAANIMAL_CANIMAL_H

#include "CAlimento.h"
class CAnimal
{
private:
    char m_Genero;
    string m_RegionVive;

protected:
    string m_Nombre;
    double m_Peso;
    int m_CantAlimento;

public:
    virtual ~CAnimal();
    CAnimal(char pGenero, const string &pRegionVive, const string &pNombre, double pPeso,
            int pCantAlimento);
    char getGenero() const;
    const string &getRegionVive() const;
    const string &getNombre() const;
    double getPeso() const;
    int getCantAlimento() const;
    virtual void ProduceSonido(ostream &os);
    virtual void Alimentar(ostream &os, CAlimento *pAlimento);
};
#endif // HERENCIAANIMAL_CANIMAL_H
