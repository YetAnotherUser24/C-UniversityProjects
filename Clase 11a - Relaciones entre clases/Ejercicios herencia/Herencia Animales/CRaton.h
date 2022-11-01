//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CRaton_H
#define HERENCIAANIMAL_CRaton_H

#include "CMamifero.h"

class CRaton : public CMamifero
{
private:
public:
    CRaton(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
           int mCantAlimento);
    ~CRaton();
    void ProduceSonido(ostream &os);
    virtual void Alimentar(ostream &os, CAlimento *pAlimento);
    virtual void ExpresionFelicidad(ostream &os);
};

#endif // HERENCIAANIMAL_CRaton_H
