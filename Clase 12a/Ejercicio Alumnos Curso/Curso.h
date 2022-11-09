#ifndef __CURSO_H__
#define __CURSO_H__

#include "Alumno.h"
#include <vector>
class Curso
{
private:
    vector<Alumno *> Alumnos;

public:
    Curso() {}
    ~Curso()
    {
        for (auto e : Alumnos)
        {
            delete e;
            e = nullptr;
        }

        Alumnos.clear();
    }

    void add_alumno(Alumno *alumno);
    void delete_alumno(string _codigo);
    int aprobados();
    int desaprobados();

    double estadistic_media();
    double estadistic_moda();
    double estadistic_mediana();
    double estadistic_desviacion_media();
    double estadistic_varianza();
    double estadistic_desviacion_std();
    double aprobados_promedio();

    void print_estadistics();
};
#endif // __CURSO_H__