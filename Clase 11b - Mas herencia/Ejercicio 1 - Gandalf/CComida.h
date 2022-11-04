#ifndef __CCOMIDA_H__
#define __CCOMIDA_H__

#include "CFelicidad.h"

class CComida : public CFelicidad
{
protected:
    string nombre;

public:
    CComida() {}
    CComida(int p, string n)
    {
        ptsf = p;
        nombre = n;
    }

    virtual ~CComida() {}
};
#endif // __CCOMIDA_H__