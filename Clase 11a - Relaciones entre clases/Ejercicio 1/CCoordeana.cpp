#include "Tipos.h"
#include "CCoordenada.h"

TipoEntero CCoordenada::get_PosX()
{
    return m_PosX;
}
TipoEntero CCoordenada::get_PosY()
{
    return m_PosY;
}

void CCoordenada::setPosX(TipoEntero _x)
{
    m_PosX = _x;
}
void CCoordenada::setPosY(TipoEntero _y)
{
    m_PosY = _y;
}
void CCoordenada::setPos(TipoEntero _x, TipoEntero _y)
{
    m_PosX = _x;
    m_PosY = _y;
}
