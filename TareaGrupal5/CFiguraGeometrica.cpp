#include "CFiguraGeometrica.h"

CFiguraGeometrica::CFiguraGeometrica()
{
    x = (rand() % 1001) / 100.0;
    y = (rand() % 1001) / 100.0;
    z = (rand() % 1001) / 100.0;
}
CFiguraGeometrica::CFiguraGeometrica(double _x, double _y, double _z)
{
    x = _x;
    y = _y;
    z = _z;
}
double CFiguraGeometrica::get_x()
{
    return x;
}
double CFiguraGeometrica::get_y()
{
    return y;
}
double CFiguraGeometrica::get_z()
{
    return z;
}