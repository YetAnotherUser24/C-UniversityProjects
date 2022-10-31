//
// Created by Teo on 2/11/2019.
//

#include "CRaton.h"

CRaton::CRaton(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
               int mCantAlimento) : CMamifero(mGenero, mRegionVive, mNombre, mPeso, mCantAlimento) {}
CRaton::~CRaton() {}

void CRaton::ProduceSonido(ostream &os)
{
    os << m_Nombre << " el raton dijo: Squik Squik" << endl;
}
void CRaton::ExpresionFelicidad(ostream &os)
{
    os << m_Nombre << " aprieta el puño de felicidad" << endl;
}
void CRaton::Alimentar(ostream &os, CAlimento *pAlimento)
{
    if (pAlimento->getNombre() == "Carne" || pAlimento->getNombre() == "Verdura")
    {
        float cantAlimento = 0.4 * pAlimento->getCantidad();
        m_Peso += cantAlimento;
        m_CantAlimento += pAlimento->getCantidad();
        os << m_Nombre << " está comiendo " << pAlimento->getNombre() << " y su peso actual es: " << m_Peso << endl;
    }
    else
    {
        cout << m_Nombre << " el raton no quiere comer " << pAlimento->getNombre() << endl;
    }
}