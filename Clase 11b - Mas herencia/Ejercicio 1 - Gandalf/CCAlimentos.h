#ifndef __CCALIMENTOS_H__
#define __CCALIMENTOS_H__

#include "CComida.h"

class CAbarrote : public CComida
{
public:
    CAbarrote() : CComida(2, "Abarrote") {}
    ~CAbarrote() {}
};

class CLembas : public CComida
{
public:
    CLembas() : CComida(3, "Lembas") {}
    ~CLembas() {}
};

class CManzana : public CComida
{
public:
    CManzana() : CComida(1, "Manzana") {}
    ~CManzana() {}
};

class CMelon : public CComida
{
public:
    CMelon() : CComida(1, "Melon") {}
    ~CMelon() {}
};

class CHoneycake : public CComida
{
public:
    CHoneycake() : CComida(5, "Honeycake") {}
    ~CHoneycake() {}
};

class CHongos : public CComida
{
public:
    CHongos() : CComida(-10, "Hongos") {}
    ~CHongos() {}
};

class COtro : public CComida
{
public:
    COtro() : CComida(-1, "") {}
    ~COtro() {}
};

#endif // __CCALIMENTOS_H__