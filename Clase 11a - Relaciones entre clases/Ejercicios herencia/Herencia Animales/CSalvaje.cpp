//
// Created by Teo on 3/11/2019.
//

#include "CSalvaje.h"

CSalvaje::CSalvaje(char mGenero, const string &mRegionVive, const string &mNombre,
                   double mPeso, int mCantAlimento) : CFelino(mGenero, mRegionVive, mNombre, mPeso,
                                                              mCantAlimento) {}

CSalvaje::~CSalvaje()
{
}
