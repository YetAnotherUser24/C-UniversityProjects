#ifndef __A_POSGRADO_H__
#define __A_POSGRADO_H__

#include "Alumno.h"

class A_Posgrado : public Alumno
{
private:
    string Lugar_trabajo;
    double Parcial;
    double Final;
    double Proyecto;

public:
    A_Posgrado(string _nombre, string _codigo, string _Lugar_trabajo, double _Parcial, double _Final, double _proyecto) : Alumno(_nombre, _codigo),
                                                                                                                          Lugar_trabajo(_Lugar_trabajo), Parcial(_Parcial), Final(_Final), Proyecto(_proyecto) {}
    ~A_Posgrado() {}

    string get_Lugar_trabajo();
    void set_Lugar_trabajo(string Lugar_trabajo);

    double get_Parcial();
    void set_Parcial(double Parcial);

    double get_Final();
    void set_Final(double Final);

    double get_proyecto();
    void set_proyecto(double proyecto);

    void nota_final() override;
    void aprobado() override;
    string get_grado() override;
};
#endif // __A_POSGRADO_H__