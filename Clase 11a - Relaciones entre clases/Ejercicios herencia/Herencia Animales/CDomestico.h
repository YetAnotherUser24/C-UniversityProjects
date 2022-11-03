//
// Created by Teo on 3/11/2019.
//

#ifndef HERENCIAANIMAL_CDOMESTICO_H
#define HERENCIAANIMAL_CDOMESTICO_H
#include "CFelino.h"
class CDomestico : public CFelino
{
private:
public:
    CDomestico(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
               int mCantAlimento);
    virtual ~CDomestico();
};
#endif // HERENCIAANIMAL_CDOMESTICO_H
