//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CLeon_H
#define HERENCIAANIMAL_CLeon_H
#include "CSalvaje.h"
class CLeon : public CSalvaje
{
private:
    int m_Vidas;

public:
    CLeon(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
          int mCantAlimento);
    virtual ~CLeon();
    int getVidas();
    void ProduceSonido(ostream &os);
    void Alimentar(ostream &os, CAlimento *pAlimento);
    void ExpresionFelicidad(ostream &os);
};
#endif // HERENCIAANIMAL_CLeon_H
