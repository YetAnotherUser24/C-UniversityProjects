#ifndef AGREGACION_BATTLEBOX_H
#define AGREGACION_BATTLEBOX_H

#include <iostream>
#include <vector>
#include "Tipos.h"
#include "CRobot.h"

using namespace std;

// Valores constantes
const TipoEntero ALTURA = 21;
const TipoEntero ANCHO = 21;
const TipoCaracter COLOR = '.';

class CBattleBox
{
private:
    vector<vector<TipoCaracter>> m_Plano;
    vector<CRobot *> m_Robots;
    void resizePlano(TipoEntero pAltura, TipoEntero pAncho);

public:
    CBattleBox();
    CBattleBox(TipoEntero pAltura, TipoEntero pAncho);
    virtual ~CBattleBox();
    void adicionarRobot(CRobot *pRobot);
    CRobot *removerRobot(TipoString pNombre);
    void imprimirRobots(ostream &os);
    TipoEntero getAltura();
    TipoEntero getAncho();
    TipoEntero getCantidadObjectos();
    void dibujarBattleBox(ostream &os);
    void actualizarBattleBox();
    void pelear();
};

#endif // AGREGACION_BATTLEBOX_H