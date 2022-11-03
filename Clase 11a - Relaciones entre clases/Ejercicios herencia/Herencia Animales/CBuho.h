//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CBuho_H
#define HERENCIAANIMAL_CBuho_H
#include "CAve.h"
class CBuho : public CAve
{
private:
public:
    ~CBuho();

    CBuho(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
          int mCantAlimento);
    virtual void ProduceSonido(ostream &os);
    virtual void Alimentar(ostream &os, CAlimento *pAlimento);
    virtual void ExpresionFelicidad(ostream &os);
};

#endif // HERENCIAANIMAL_CBuho_H
