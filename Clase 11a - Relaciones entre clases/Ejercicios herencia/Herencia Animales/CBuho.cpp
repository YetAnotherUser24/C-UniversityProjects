//
// Created by Teo on 2/11/2019.
//

#include "CBuho.h"
#include <iostream>

CBuho::~CBuho() {}

CBuho::CBuho(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
             int mCantAlimento) : CAve(mGenero, mRegionVive, mNombre, mPeso, mCantAlimento) {}

void CBuho::ProduceSonido(ostream &os)
{
    os << m_Nombre << " el buho dijo: u-u " << endl;
}
void CBuho::ExpresionFelicidad(ostream &os)
{
    os << m_Nombre << " se duerme" << endl;
}
void CBuho::Alimentar(ostream &os, CAlimento *pAlimento)
{
    if (pAlimento->getNombre() == "Maiz" || pAlimento->getNombre() == "Carne")
    {
        float cantAlimento = 0.3 * pAlimento->getCantidad();
        m_Peso += cantAlimento;
        m_CantAlimento += pAlimento->getCantidad();
        os << m_Nombre << " está comiendo " << pAlimento->getNombre() << " y su peso actual es: " << m_Peso << endl;
    }
    else
    {
        os << m_Nombre << " el buho no quiere comer " << pAlimento->getNombre() << endl;
    }
}
