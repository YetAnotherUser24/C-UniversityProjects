//
// Created by Teo on 3/11/2019.
//

#include "CDomestico.h"

CDomestico::CDomestico(char mGenero, const string &mRegionVive, const string &mNombre,
                       double mPeso, int mCantAlimento) : CFelino(mGenero, mRegionVive, mNombre, mPeso,
                                                                  mCantAlimento) {}

CDomestico::~CDomestico()
{
}
