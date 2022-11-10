#ifndef __SPARC_H__
#define __SPARC_H__

#include "Red.h"
class SPARC : public Red
{

public:
    SPARC() : Red(10) {}
    ~SPARC() {}

    string get_nombre()
    {
        return "SPARC";
    }
};
#endif // __SPARC_H__