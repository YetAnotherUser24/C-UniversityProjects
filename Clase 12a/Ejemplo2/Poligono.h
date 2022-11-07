#ifndef __POLIGONO_H__
#define __POLIGONO_H__

#include "AbstractPoligono.h"

class Poligono : public AbstractPoligono
{

public:
    Poligono(){};
    Number calcularArea() override;
    void dibujar() const override;
};

#endif // __POLIGONO_H__