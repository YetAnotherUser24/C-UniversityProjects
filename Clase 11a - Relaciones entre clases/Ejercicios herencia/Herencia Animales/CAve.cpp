//
// Created by Teo on 2/11/2019.
//

#include "CAve.h"
CAve::~CAve() {}

CAve::CAve(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
           int mCantAlimento) : CAnimal(mGenero, mRegionVive, mNombre, mPeso, mCantAlimento) {}
