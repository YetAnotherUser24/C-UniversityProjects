//
// Created by Teo on 2/11/2019.
//

#include "CPerro.h"

CPerro::CPerro(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
               int mCantAlimento) : CMamifero(mGenero, mRegionVive, mNombre, mPeso, mCantAlimento) {}
CPerro::~CPerro() {}

void CPerro::ProduceSonido(ostream &os)
{
    os << m_Nombre << " el perro dijo: BauBau" << endl;
}
void CPerro::ExpresionFelicidad(ostream &os)
{
    os << m_Nombre << " menea su cola" << endl;
}
void CPerro::Alimentar(ostream &os, CAlimento *pAlimento)
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
        cout << m_Nombre << " el perro no quiere comer " << pAlimento->getNombre() << endl;
    }
}