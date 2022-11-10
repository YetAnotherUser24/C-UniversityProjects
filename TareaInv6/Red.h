#ifndef __RED_H__
#define __RED_H__

#include <iostream>
using namespace std;

class Red
{
protected:
    int t_execution;
    bool status;

public:
    Red() : t_execution(0), status(false) {}
    Red(int _t) : t_execution(_t), status(true) {}
    Red(int _t, bool _s) : t_execution(_t), status(_s) {}

    ~Red() {}
    virtual int getT_execution() { return t_execution; }
    virtual void setT_execution(int _t) { t_execution = _t; }
    virtual bool getStatus() { return status; }
    virtual void setStatus(bool _s) { status = _s; }
    virtual string get_nombre() = 0;
    virtual int getT_executiontotal(int n)
    {
        return n * t_execution;
    }
};

#endif // __RED_H__