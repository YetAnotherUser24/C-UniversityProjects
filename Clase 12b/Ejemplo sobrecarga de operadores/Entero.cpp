#include "Entero.h"
Entero operator+(Entero &x, Entero &y)
{
    return Entero(x.m_dato + y.m_dato);
}
ostream &operator<<(ostream &o, Entero e)
{
    o << e.m_dato + 5;
    return o;
}