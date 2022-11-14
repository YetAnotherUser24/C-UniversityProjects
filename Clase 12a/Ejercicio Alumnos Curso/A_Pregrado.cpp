#include "A_Pregrado.h"

double A_Pregrado::get_pc1()
{
    return PC1;
}
void A_Pregrado::set_pc1(double pC1)
{
    PC1 = pC1;
}
double A_Pregrado::get_pc2()
{
    return PC2;
}
void A_Pregrado::set_pc2(double pC2)
{
    PC2 = pC2;
}
double A_Pregrado::get_pc3()
{
    return PC3;
}
void A_Pregrado::set_pc3(double pC3)
{
    PC3 = pC3;
}
double A_Pregrado::get_proyecto()
{
    return Proyecto;
}
void A_Pregrado::set_proyecto(double proyecto)
{
    Proyecto = proyecto;
}

void A_Pregrado::nota_final()
{
    NF = 0.2 * PC1 + 0.2 * PC2 + 0.2 * PC3 + 0.4 * Proyecto;
}

void A_Pregrado::aprobado()
{
    status = (NF >= 13.0);
}

string A_Pregrado::get_grado()
{
    return "Pregrado";
}