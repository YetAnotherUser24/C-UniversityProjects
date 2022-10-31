//
// Created by Teo on 3/11/2019.
//

#ifndef HERENCIAANIMAL_CSalvaje_H
#define HERENCIAANIMAL_CSalvaje_H
#include "CFelino.h"
class CSalvaje : public CFelino
{
private:
public:
    CSalvaje(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
             int mCantAlimento);
    virtual ~CSalvaje();
};
#endif // HERENCIAANIMAL_CSalvaje_H
