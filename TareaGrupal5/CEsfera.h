#include "CFiguraGeometrica.h"

class CEsfera : CFiguraGeometrica
{
private:
    double radio;

public:
    CEsfera() {}
    CEsfera(double, double, double, double = 0);

    virtual ~CEsfera() {}

    double volumen();
    double distancia(CFiguraGeometrica *);
};