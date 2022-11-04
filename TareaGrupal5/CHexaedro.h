#ifndef CHexaedroH
#define CHexaedroH

#include "CFiguraGeometrica.h"

class CHexaedro : public CFiguraGeometrica
{
private:
    double lado;

public:
    CHexaedro() { lado = 0; }
    CHexaedro(double, double, double, double = 0);

    virtual ~CHexaedro() {}

    void set_lado(double);
    double get_lado();
    virtual double volumen();
    virtual double distancia(CFiguraGeometrica *);
};

#endif