#include "A_Posgrado.h"

string A_Posgrado::get_Lugar_trabajo()
{
    return Lugar_trabajo;
}
void A_Posgrado::set_Lugar_trabajo(string Lugar_trabajo)
{
    Lugar_trabajo = Lugar_trabajo;
}
double A_Posgrado::get_Parcial()
{
    return Parcial;
}
void A_Posgrado::set_Parcial(double Parcial)
{
    Parcial = Parcial;
}
double A_Posgrado::get_Final()
{
    return Final;
}
void A_Posgrado::set_Final(double Final)
{
    Final = Final;
}
double A_Posgrado::get_proyecto()
{
    return Proyecto;
}
void A_Posgrado::set_proyecto(double proyecto)
{
    Proyecto = proyecto;
}

void A_Posgrado::nota_final()
{
    NF = 0.3 * Parcial + 0.3 * Final + 0.4 * Proyecto;
}

void A_Posgrado::aprobado()
{
    status = (NF >= 11.0);
}