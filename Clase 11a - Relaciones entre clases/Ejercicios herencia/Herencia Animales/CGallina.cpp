//
// Created by Teo on 2/11/2019.
//

#include "CGallina.h"
#include <iostream>

CGallina::~CGallina() {}

CGallina::CGallina(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
                   int mCantAlimento) : CAve(mGenero, mRegionVive, mNombre, mPeso, mCantAlimento) {}

void CGallina::ProduceSonido(ostream &os)
{
    os << m_Nombre << " la gallina dijo: Cluclk" << endl;
}
void CGallina::ExpresionFelicidad(ostream &os)
{
    os << m_Nombre << " deja un huevo" << endl;
}
void CGallina::Alimentar(ostream &os, CAlimento *pAlimento)
{
    if (pAlimento->getNombre() == "Maiz")
    {
        float cantAlimento = 0.3 * pAlimento->getCantidad();
        m_Peso += cantAlimento;
        m_CantAlimento += pAlimento->getCantidad();
        os << m_Nombre << " está comiendo " << pAlimento->getNombre() << " y su peso actual es: " << m_Peso << endl;
    }
    else
    {
        os << m_Nombre << " la gallina no quiere comer " << pAlimento->getNombre() << endl;
    }
}
