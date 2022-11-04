#ifndef __CGANDALF_H__
#define __CGANDALF_H__

#include "CAnimo.h"
#include "CCAlimentos.h"

class CGandalf : public CFelicidad
{
public:
    CGandalf() { ptsf = 0; }
    ~CGandalf() {}
    void dar_comer(CComida *comida)
    {
        ptsf += comida->get_ptsf();
    }
};
#endif // __CGANDALF_H__