#include "Tipos.h"

class CCoordenada
{
private:
    TipoEntero m_PosX;
    TipoEntero m_PosY;

public:
    CCoordenada();
    virtual ~CCoordenada();

    CCoordenada(TipoEntero pPosX, TipoEntero pPosY);
    TipoEntero getPosX();
    TipoEntero getPosY();
};