//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CFELINO_H
#define HERENCIAANIMAL_CFELINO_H
#include "CMamifero.h"
class CFelino : public CMamifero
{
private:
public:
    virtual ~CFelino();

    CFelino(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
            int mCantAlimento);
};
#endif // HERENCIAANIMAL_CFELINO_H
