#include "CRobot.h"
#include <cmath>
CRobot::CRobot() : m_Color{}, m_PosX{}, m_PosY{} { m_Vidas = 20; }

CRobot::CRobot(TipoString pNombre, TipoCaracter pColor,
               TipoEntero pPosX, TipoEntero pPosY) : m_Nombre{pNombre}, m_Color{pColor},
                                                     m_PosX{pPosX}, m_PosY{pPosY} { m_Vidas = 20; }
CRobot::~CRobot() {}
void CRobot::setNombre(TipoString pNombre) { this->m_Nombre = pNombre; }
void CRobot::moverse(TipoEntero pPosX, TipoEntero pPosY) {} //--  por implementar
void CRobot::setVidas(TipoEntero pVidas) { this->m_Vidas = pVidas; }
TipoString CRobot::getNombre() { return m_Nombre; }
TipoEntero CRobot::getPosX() { return m_PosX; }
TipoEntero CRobot::getPosY() { return m_PosY; }
TipoCaracter CRobot::getColor() { return m_Color; }
TipoString CRobot::mostrarPosicion()
{
    return "X = " + to_string(m_PosX) + " Y = " + to_string(m_PosY);
}
TipoEntero CRobot::getVidas() { return m_Vidas; }

void CRobot::pelear(vector<CRobot *> &vecRobots)
{
    // verificar si hay un robot cerca entonces golpear
    double d;
    double menor = 9999;
    int *coor[2];
    int x, y;
    for (auto &robots : vecRobots)
    {
        x = robots->getPosX();
        y = robots->getPosY();
        d += pow(x - m_PosX, 2);
        d += pow(y - m_PosY, 2);
        d = sqrt(d);

        if (d < menor)
        {
            menor = d;
            *coor[0] = x;
            *coor[1] = y;
        }
        if ((d != 0) && (d == 1.0 || d == sqrt(2)))
        {
            robots->setVidas(robots->getVidas() - 1);
        }
        else
        {
        }
        d = 0;
    }
    // si no hay cerca, entonces me muevo
}