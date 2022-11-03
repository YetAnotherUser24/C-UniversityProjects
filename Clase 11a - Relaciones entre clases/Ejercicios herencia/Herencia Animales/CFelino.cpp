//
// Created by Teo on 2/11/2019.
//

#include "CFelino.h"

CFelino::CFelino(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
                 int mCantAlimento) : CMamifero(mGenero, mRegionVive, mNombre, mPeso, mCantAlimento) {}

CFelino::~CFelino()
{
}
