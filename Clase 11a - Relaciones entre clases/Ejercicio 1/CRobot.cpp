#include "CRobot.h"

CRobot::CRobot() : m_Color{}, m_PosX{}, m_PosY{}
{
    m_Vidas = 20;
}
CRobot::CRobot(TipoString pNombre, TipoCaracter pColor,
               TipoEntero pPosX, TipoEntero pPosY) : m_Nombre{pNombre}, m_Color{pColor},
                                                     m_PosX{pPosX}, m_PosY{pPosY}
{
    m_Vidas = 20;
}
CRobot::~CRobot() {}
void CRobot::setNombre(TipoString pNombre) { this->m_Nombre = pNombre; }
void CRobot::moverse(TipoEntero pPosX, TipoEntero pPosY) {} //--  por implementar
TipoString CRobot::getNombre() { return m_Nombre; }
TipoEntero CRobot::getPosX() { return m_PosX; }
TipoEntero CRobot::getPosY() { return m_PosY; }
TipoCaracter CRobot::getColor() { return m_Color; }
TipoString CRobot::mostrarPosicion()
{
    return "X = " + to_string(m_PosX) + " Y = " + to_string(m_PosY);
}
void CRobot::pelear(vector<CRobot *> &vecRobots)
{
    // Verificar si hay un robot cerca entonces golpear
    for (auto &pRobot : vecRobots)
    {
        // evitar compararse a si mismo
        if (m_Color == pRobot->getColor())
        {
            continue;
        }
        if (abs(getPosX() - pRobot->getPosX()) <= 1 and
            abs(getPosY() - pRobot->getPosY()) <= 1)
        {
            // golpear y terminar turno
            golpear(*pRobot);
            return;
        }
    }
    // Si no moverse
    CRobot *elegido = vecRobots[0];
    if (m_Color == elegido->getColor())
    {
        elegido = vecRobots[1];
    }
    // m_PosX = ;
    // m_PosY = ;
    if (elegido->getPosX() > m_PosX)
    {
        m_PosX++;
    }
    else if (elegido->getPosX() < m_PosX)
    {
        m_PosX--;
    }
    if (elegido->getPosY() > m_PosY)
    {
        m_PosY++;
    }
    else if (elegido->getPosY() < m_PosY)
    {
        m_PosY--;
    }
}
void CRobot::golpear(CRobot &enemigo)
{
    // int averia = (peso >= 35) ? 2 : 1;
    enemigo.setVidas(enemigo.getVidas() - 1);
}