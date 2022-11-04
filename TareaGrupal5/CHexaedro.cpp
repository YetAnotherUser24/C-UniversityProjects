#include "CHexaedro.h"

CHexaedro::CHexaedro(double _x, double _y, double _z, double _l) : CFiguraGeometrica(_x, _y, _z), lado(_l) {}

void CHexaedro::set_lado(double _l)
{
    lado = _l;
}
double CHexaedro::get_lado()
{
    return lado;
}
double CHexaedro::volumen()
{
    return (pow(lado, 3));
}
double CHexaedro::distancia(CFiguraGeometrica *solido)
{
    double x1 = solido->get_x();
    double y1 = solido->get_y();
    double z1 = solido->get_z();

    return (sqrt(pow(x1 - x, 2) + pow(y1 - y, 2) + pow(z1 - z, 2)));
}