//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CPERRO_H
#define HERENCIAANIMAL_CPERRO_H

#include "CMamifero.h"

class CPerro : public CMamifero
{
private:
public:
    CPerro(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
           int mCantAlimento);
    ~CPerro();
    void ProduceSonido(ostream &os);
    virtual void Alimentar(ostream &os, CAlimento *pAlimento);
    virtual void ExpresionFelicidad(ostream &os);
};

#endif // HERENCIAANIMAL_CPERRO_H
