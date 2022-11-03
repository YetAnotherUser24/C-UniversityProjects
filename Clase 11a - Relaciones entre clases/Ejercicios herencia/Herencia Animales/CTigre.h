//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CTigre_H
#define HERENCIAANIMAL_CTigre_H
#include "CSalvaje.h"
class CTigre : public CSalvaje
{
private:
    int m_Vidas;

public:
    CTigre(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
           int mCantAlimento);
    virtual ~CTigre();
    int getVidas();
    void ProduceSonido(ostream &os);
    void Alimentar(ostream &os, CAlimento *pAlimento);
    void ExpresionFelicidad(ostream &os);
};
#endif // HERENCIAANIMAL_CTigre_H
