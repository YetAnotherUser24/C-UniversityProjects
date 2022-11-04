#ifndef CTetraedroH
#define CTetraedroH

#include "CFiguraGeometrica.h"

class CTetraedro : public CFiguraGeometrica
{
private:
    double lado;

public:
    CTetraedro() { lado = 0; }
    CTetraedro(double, double, double, double = 0);

    virtual ~CTetraedro() {}

    void set_lado(double);
    double get_lado();
    virtual double volumen();
    virtual double distancia(CFiguraGeometrica *);
};

#endif