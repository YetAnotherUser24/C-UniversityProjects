//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CGATO_H
#define HERENCIAANIMAL_CGATO_H
#include "CDomestico.h"
class CGato : public CDomestico
{
private:
    int m_Vidas;

public:
    CGato(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
          int mCantAlimento);
    virtual ~CGato();
    int getVidas();
    void ProduceSonido(ostream &os);
    void Alimentar(ostream &os, CAlimento *pAlimento);
    void ExpresionFelicidad(ostream &os);
};
#endif // HERENCIAANIMAL_CGATO_H
