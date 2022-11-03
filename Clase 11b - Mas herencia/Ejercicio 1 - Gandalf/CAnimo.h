#ifndef __CANIMO_H__
#define __CANIMO_H__

#include <vector>
#include "CFelicidad.h"

class CAnimo : public CFelicidad
{
private:
    vector<string> animo = {"Enojado", "Triste", "Feliz", "Refeliz"};

public:
    CAnimo(){};
    CAnimo(int p)
    {
        ptsf = p;
    }
    ~CAnimo() {}

    void set(int p)
    {
        ptsf = p;
    }
    string get_estado()
    {
        if (ptsf < -5)
        {
            return animo[0];
        }
        else if (ptsf <= 0)
        {
            return animo[1];
        }
        else if (ptsf <= 15)
        {
            return animo[2];
        }
        else if (ptsf > 15)
        {
            return animo[3];
        }
    }
};

#endif // __CANIMO_H__