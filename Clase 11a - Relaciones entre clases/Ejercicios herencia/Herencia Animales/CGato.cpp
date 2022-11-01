//
// Created by Teo on 2/11/2019.
//

#include "CGato.h"
#include <iostream>

CGato::CGato(char mGenero, const string &mRegionVive, const string &mNombre, double mPeso,
             int mCantAlimento) : CDomestico(mGenero, mRegionVive, mNombre, mPeso, mCantAlimento) {}
CGato::~CGato() {}
int CGato::getVidas()
{
    return m_Vidas;
}

void CGato::ProduceSonido(ostream &os)
{
    os << m_Nombre << " el leon dijo: Miauuuu" << endl;
}
void CGato::ExpresionFelicidad(ostream &os)
{
    os << m_Nombre << " ronronea" << endl;
}
void CGato::Alimentar(ostream &os, CAlimento *pAlimento)
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
        os << m_Nombre << " el gato no quiere comer " << pAlimento->getNombre() << endl;
    }
}