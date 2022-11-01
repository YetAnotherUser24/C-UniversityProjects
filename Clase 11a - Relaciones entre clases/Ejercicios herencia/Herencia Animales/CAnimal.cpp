//
// Created by Teo on 2/11/2019.
//

#include "CAnimal.h"
/*
CAnimal::CAnimal(string pNombre, double pPeso, int pCantAlimento) {
    m_Nombre = pNombre;
    m_Peso=pPeso;
    m_CantAlimento = pCantAlimento;
}
CAnimal::CAnimal() {}

string CAnimal::getNombre(){
    return m_Nombre;
}
double CAnimal::getPeso(){
    return m_Peso;
}
int CAnimal::getCantAlimento(){
    return m_CantAlimento;
}

*/
CAnimal::~CAnimal() {}
CAnimal::CAnimal(char pGenero, const string &pRegionVive, const string &pNombre, double pPeso,
                 int pCantAlimento) : m_Genero(pGenero), m_RegionVive(pRegionVive), m_Nombre(pNombre),
                                      m_Peso(pPeso), m_CantAlimento(pCantAlimento) {}
char CAnimal::getGenero() const
{
    return m_Genero;
}
const string &CAnimal::getRegionVive() const
{
    return m_RegionVive;
}
const string &CAnimal::getNombre() const
{
    return m_Nombre;
}
double CAnimal::getPeso() const
{
    return m_Peso;
}
int CAnimal::getCantAlimento() const
{
    return m_CantAlimento;
}
void CAnimal::ProduceSonido(ostream &os) {}
void CAnimal::Alimentar(ostream &os, CAlimento *pAlimento) {}