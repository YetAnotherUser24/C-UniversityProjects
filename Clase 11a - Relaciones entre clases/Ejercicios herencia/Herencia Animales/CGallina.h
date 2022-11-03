//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CGALLINA_H
#define HERENCIAANIMAL_CGALLINA_H
#include "CAve.h"
class CGallina : public CAve
{
private:
public:
    ~CGallina();

    CGallina(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
             int mCantAlimento);
    virtual void ProduceSonido(ostream &os);
    virtual void Alimentar(ostream &os, CAlimento *pAlimento);
    virtual void ExpresionFelicidad(ostream &os);
};

#endif // HERENCIAANIMAL_CGALLINA_H
