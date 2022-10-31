//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CMAMIFERO_H
#define HERENCIAANIMAL_CMAMIFERO_H

#include "CAnimal.h"

class CMamifero : public CAnimal
{
private:
public:
    CMamifero(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
              int mCantAlimento);
};

#endif // HERENCIAANIMAL_CMAMIFERO_H
