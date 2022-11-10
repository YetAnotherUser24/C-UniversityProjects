#ifndef __MIPS_H__
#define __MIPS_H__

#include "Red.h"

class MIPS : public Red
{

public:
    MIPS() : Red(3) {}
    ~MIPS() {}

    string get_nombre() override
    {
        return "MIPS";
    }
};
#endif // __MIPS_H__