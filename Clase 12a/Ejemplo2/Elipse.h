#ifndef __ELIPSE_H__
#define __ELIPSE_H__

#include "Poligono.h"

class Elipse : public Poligono
{
    Number ejeMayor;
    Number ejeMenor;

public:
    Elipse(Number ejeMayor, Number ejeMenor);
    Number calcularArea() override;
    void dibujar() const override;
};

#endif // __ELIPSE_H__