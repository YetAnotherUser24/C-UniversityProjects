#ifndef __A_PREGRADO_H__
#define __A_PREGRADO_H__

#include "Alumno.h"

class A_Pregrado : public Alumno
{
private:
    double PC1;
    double PC2;
    double PC3;
    double Proyecto;

public:
    A_Pregrado(string _nombre, string _codigo, double _pc1, double _pc2, double _pc3, double _proyecto) : Alumno(_nombre, _codigo),
                                                                                                          PC1(_pc1), PC2(_pc2), PC3(_pc3), Proyecto(_proyecto) {}
    ~A_Pregrado() {}

    double get_pc1();
    void set_pc1(double pC1);

    double get_pc2();
    void set_pc2(double pC2);

    double get_pc3();
    void set_pc3(double pC3);

    double get_proyecto();
    void set_proyecto(double proyecto);

    void nota_final() override;
    void aprobado() override;
};
#endif // __A_PREGRADO_H__