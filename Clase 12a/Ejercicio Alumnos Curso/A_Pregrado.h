#include "Alumno.h"

class A_Pregrado : public Alumno
{
private:
    double PC1;
    double PC2;
    double PC3;
    double Proyecto;

public:
    double pC1() const;
    void setPC1(double pC1);

    double pC2() const;
    void setPC2(double pC2);

    double pC3() const;
    void setPC3(double pC3);

    double proyecto() const;
    void setProyecto(double proyecto);

    double nota_final() override;
    bool aprobado() override;
};