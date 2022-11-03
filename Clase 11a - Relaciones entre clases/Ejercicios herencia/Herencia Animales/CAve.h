//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CAVE_H
#define HERENCIAANIMAL_CAVE_H
#include "CAnimal.h"
class CAve : public CAnimal
{
private:
public:
    CAve();
    ~CAve();
    CAve(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
         int mCantAlimento);
};
#endif // HERENCIAANIMAL_CAVE_H
