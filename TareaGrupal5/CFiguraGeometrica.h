#ifndef CFiguraGeometricaH
#define CFiguraGeometricaH

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

    virtual double get_x();
    virtual double get_y();
    virtual double get_z();

    virtual double volumen() = 0;
    virtual double distancia(CFiguraGeometrica *) = 0;
};

#endif
