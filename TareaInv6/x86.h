#ifndef __X86_H__
#define __X86_H__

#include "Red.h"

class x86 : public Red
{

public:
    x86() : Red(5) {}
    ~x86() {}

    string get_nombre() override
    {
        return "x86";
    }
};
#endif // __X86_H__