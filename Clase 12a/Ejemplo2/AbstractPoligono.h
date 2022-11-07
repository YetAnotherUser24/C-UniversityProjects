#ifndef __ABSTRACTPOLIGONO_H__
#define __ABSTRACTPOLIGONO_H__

#include "tipos.h"

class AbstractPoligono
{
public:
    virtual ~AbstractPoligono(){};
    virtual Number calcularArea() = 0;
    virtual void dibujar() const = 0;
};

#endif // __ABSTRACTPOLIGONO_H__