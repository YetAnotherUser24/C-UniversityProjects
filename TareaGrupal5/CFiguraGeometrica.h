#include <cstdlib>
#include "time.h"
#include <cmath>

class CFiguraGeometrica
{
protected:
    double x;
    double y;
    double z;

public:
    CFiguraGeometrica();
    CFiguraGeometrica(double, double, double);
    virtual ~CFiguraGeometrica() {}

    virtual double volumen() = 0;
    virtual double distancia() = 0;

    double get_x();
    double get_y();
    double get_z();
};
