#ifndef __ARM_H__
#define __ARM_H__

#include "Red.h"

class ARM : public Red
{

public:
    ARM() : Red(7) {}
    ~ARM() {}

    string get_nombre() override
    {
        return "ARM";
    }
};
#endif // __ARM_H__