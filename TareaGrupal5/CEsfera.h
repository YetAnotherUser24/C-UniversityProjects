#ifndef CEsferaH
#define CEsferaH

#include "CFiguraGeometrica.h"

class CEsfera : public CFiguraGeometrica
{
private:
    double radio;

public:
    CEsfera() { radio = 0; }
    CEsfera(double, double, double, double = 0);

    virtual ~CEsfera() {}

    void set_radio(double);
    double get_radio();
    double volumen();
    double distancia(CFiguraGeometrica *);
};

#endif