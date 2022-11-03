//
// Created by Teo on 2/11/2019.
//

#include "CTigre.h"
#include <iostream>

CTigre::CTigre(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
               int mCantAlimento) : CSalvaje(mGenero, mRegionVive, mNombre, mPeso, mCantAlimento) {}
CTigre::~CTigre() {}
int CTigre::getVidas()
{
    return m_Vidas;
}

void CTigre::ProduceSonido(ostream &os)
{
    os << m_Nombre << " el tigre dijo: GrRrrr" << endl;
}
void CTigre::ExpresionFelicidad(ostream &os)
{
    os << m_Nombre << " ronronea" << endl;
}
void CTigre::Alimentar(ostream &os, CAlimento *pAlimento)
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
        os << m_Nombre << " el tigre no quiere comer " << pAlimento->getNombre() << endl;
    }
}