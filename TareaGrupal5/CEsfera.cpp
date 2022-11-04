#include "CEsfera.h"

CEsfera::CEsfera(double _x, double _y, double _z, double _r) : CFiguraGeometrica(_x, _y, _z), radio(_r) {}

void CEsfera::set_radio(double _r)
{
    radio = _r;
}
double CEsfera::get_radio()
{
    return radio;
}
double CEsfera::volumen()
{
    return (4 / 3 * pow(radio, 3) * M_PI);
}
double CEsfera::distancia(CFiguraGeometrica *solido)
{
    double x1 = solido->get_x();
    double y1 = solido->get_y();
    double z1 = solido->get_z();

    return (sqrt(pow(x1 - x, 2) + pow(y1 - y, 2) + pow(z1 - z, 2)));
}