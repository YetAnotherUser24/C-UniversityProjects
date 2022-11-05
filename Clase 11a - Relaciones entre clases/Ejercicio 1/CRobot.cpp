#include "CRobot.h"

CRobot::CRobot() : m_Color{}
{
    m_Vidas = 4;
}
CRobot::CRobot(TipoString pNombre, TipoCaracter pColor,
               TipoEntero pPosX, TipoEntero pPosY) : m_Nombre{pNombre}, m_Color{pColor},
                                                     m_Coordenada{pPosX, pPosY}
{
    m_Vidas = 4;
}
CRobot::~CRobot() {}
void CRobot::setNombre(TipoString pNombre) { this->m_Nombre = pNombre; }
void CRobot::moverse(TipoEntero pPosX, TipoEntero pPosY) {} //--  por implementar
TipoString CRobot::getNombre() { return m_Nombre; }
TipoEntero CRobot::getPosX() { return m_Coordenada.get_PosX(); }
TipoEntero CRobot::getPosY() { return m_Coordenada.get_PosY(); }
TipoCaracter CRobot::getColor() { return m_Color; }
TipoString CRobot::mostrarPosicion()
{
    return "X = " + to_string(m_Coordenada.get_PosX()) + " Y = " + to_string(m_Coordenada.get_PosY());
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
        if (abs(m_Coordenada.get_PosX() - pRobot->getPosX()) <= 1 &&
            abs(m_Coordenada.get_PosY() - pRobot->getPosY()) <= 1)
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
    if (elegido->getPosX() > getPosX())
    {
        m_Coordenada.setPosX(getPosX() + 1);
    }
    else if (elegido->getPosX() < getPosX())
    {
        m_Coordenada.setPosX(getPosX() - 1);
    }
    if (elegido->getPosY() > getPosY())
    {
        m_Coordenada.setPosY(getPosY() + 1);
    }
    else if (elegido->getPosY() < getPosY())
    {
        m_Coordenada.setPosY(getPosY() - 1);
    }
}
void CRobot::golpear(CRobot &enemigo)
{
    // int averia = (peso >= 35) ? 2 : 1;
    enemigo.setVidas(enemigo.getVidas() - 1);
}