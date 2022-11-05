//
// Created by ruben on 6/10/19.
//

#ifndef AGREGACION_ROBOT_H
#define AGREGACION_ROBOT_H

#include <iostream>
#include <vector>
#include "Tipos.h"
#include "CCoordenada.h"

using namespace std;

class CRobot
{
private:
    TipoString m_Nombre;
    TipoCaracter m_Color;
    TipoEntero m_Vidas;
    CCoordenada m_Coordenada;
    void moverse(TipoEntero pPosX, TipoEntero pPosY);

public:
    CRobot();
    CRobot(TipoString pNombre, TipoCaracter pColor,
           TipoEntero pPosX, TipoEntero pPosY);
    virtual ~CRobot();
    void setNombre(TipoString pNombre);
    TipoString getNombre();
    TipoEntero getPosX();
    TipoEntero getPosY();
    TipoCaracter getColor();
    void setVidas(TipoEntero vidas) { m_Vidas = vidas; }
    TipoEntero getVidas() { return m_Vidas; }
    TipoString mostrarPosicion();
    void pelear(vector<CRobot *> &vecRobots);
    void golpear(CRobot &enemigo);
};

#endif // AGREGACION_ROBOT_H