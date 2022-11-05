#include "Tipos.h"

class CCoordenada
{
private:
    TipoEntero m_PosX;
    TipoEntero m_PosY;

public:
    CCoordenada() {}
    virtual ~CCoordenada() {}

    CCoordenada(TipoEntero pPosX, TipoEntero pPosY)
    {
        m_PosX = pPosX;
        m_PosY = pPosY;
    }
    TipoEntero get_PosX();
    TipoEntero get_PosY();
    void setPosX(TipoEntero);
    void setPosY(TipoEntero);
    void setPos(TipoEntero, TipoEntero);
};