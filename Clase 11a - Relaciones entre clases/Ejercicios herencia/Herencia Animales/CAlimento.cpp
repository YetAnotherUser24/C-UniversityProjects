//
// Created by Teo on 2/11/2019.
//

#include "CAlimento.h"
CAlimento::CAlimento(string pNombre, int pCantidad)
{
    m_Nombre = pNombre;
    m_Cantidad = pCantidad;
}
CAlimento::~CAlimento()
{
}
int CAlimento::getCantidad()
{
    return m_Cantidad;
}
string CAlimento::getNombre()
{
    return m_Nombre;
}