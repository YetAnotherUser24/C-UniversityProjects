//
// Created by Teo on 2/11/2019.
//

#include "CLeon.h"
#include <iostream>

CLeon::CLeon(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
             int mCantAlimento) : CSalvaje(mGenero, mRegionVive, mNombre, mPeso, mCantAlimento) {}
CLeon::~CLeon() {}
int CLeon::getVidas()
{
    return m_Vidas;
}

void CLeon::ProduceSonido(ostream &os)
{
    os << m_Nombre << " el leon dijo: RoarRrRRRr" << endl;
}
void CLeon::ExpresionFelicidad(ostream &os)
{
    os << m_Nombre << " ronronea" << endl;
}
void CLeon::Alimentar(ostream &os, CAlimento *pAlimento)
{
    if (pAlimento->getNombre() == "Carne")
    {
        float cantAlimento = 0.3 * pAlimento->getCantidad();
        m_Peso += cantAlimento;
        m_CantAlimento += pAlimento->getCantidad();
        os << m_Nombre << " está comiendo " << pAlimento->getNombre() << " y su peso actual es: " << m_Peso << endl;
    }
    else
    {
        os << m_Nombre << " el leon no quiere comer " << pAlimento->getNombre() << endl;
    }
}