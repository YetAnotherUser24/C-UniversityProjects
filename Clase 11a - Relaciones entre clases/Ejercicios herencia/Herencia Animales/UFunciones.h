//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_UFUNCIONES_H
#define HERENCIAANIMAL_UFUNCIONES_H
#include "CGato.h"
#include "CPerro.h"
#include "CGallina.h"
#include "CRaton.h"
#include "CBuho.h"
#include "CLeon.h"
#include "CTigre.h"

ostream &operator<<(ostream &os, CAnimal &rAnimal)
{
    os << "\n------- Datos del Animal ------\n";
    os << "Nombre         : " << rAnimal.getNombre() << "\n";
    os << "Cantidad Comida: " << rAnimal.getCantAlimento() << "\n";
    os << "Peso           : " << rAnimal.getPeso() << "\n";
    os << "Género         : " << rAnimal.getGenero() << "\n";
    os << "Región         : " << rAnimal.getRegionVive() << "\n";
    return os;
}
ostream &operator<<(ostream &os, CGato &rGato)
{
    CAnimal &rAnimal = rGato;
    os << rAnimal;
    rGato.ProduceSonido(os);
    rGato.ExpresionFelicidad(os);
    return os;
}
ostream &operator<<(ostream &os, CPerro &rPerro)
{
    CAnimal &rAnimal = rPerro;
    os << rAnimal;
    rPerro.ProduceSonido(os);
    rPerro.ExpresionFelicidad(os);
    return os;
}
ostream &operator<<(ostream &os, CGallina &rGallina)
{
    CAnimal &rAnimal = rGallina;
    os << rAnimal;
    rGallina.ProduceSonido(os);
    rGallina.ExpresionFelicidad(os);
    return os;
}
ostream &operator<<(ostream &os, CRaton &rRaton)
{
    CAnimal &rAnimal = rRaton;
    os << rAnimal;
    rRaton.ProduceSonido(os);
    rRaton.ExpresionFelicidad(os);
    return os;
}
ostream &operator<<(ostream &os, CBuho &rBuho)
{
    CAnimal &rAnimal = rBuho;
    os << rAnimal;
    rBuho.ProduceSonido(os);
    rBuho.ExpresionFelicidad(os);
    return os;
}
ostream &operator<<(ostream &os, CLeon &rLeon)
{
    CAnimal &rAnimal = rLeon;
    os << rAnimal;
    rLeon.ProduceSonido(os);
    rLeon.ExpresionFelicidad(os);
    return os;
}
ostream &operator<<(ostream &os, CTigre &rTigre)
{
    CAnimal &rAnimal = rTigre;
    os << rAnimal;
    rTigre.ProduceSonido(os);
    rTigre.ExpresionFelicidad(os);
    return os;
}

#endif // HERENCIAANIMAL_UFUNCIONES_H
