#ifndef __CSECCION_H__
#define __CSECCION_H__

#include "CProfesor.h"
#include "CLaboratorio.h"
#include "CCurso.h"
#include "CAlumno.h"
#include <vector>

class CSeccion
{
private:
    CCurso *curso;
    CProfesor *profesor;
    CLaboratorio *laboratorio;
    vector<CAlumno *> lista_alumnos;
    int dia;
    int hora_inicio;
    int hora_fin;
    int nmatriculados;

public:
    CSeccion() {}
    CSeccion(
        string cur_codigo, string cur_nombres, string cur_pre_requisito, int cur_ciclo, int cur_creditos,
        string pro_codigo, string pro_nombres, string pro_apellido_paterno, string pro_apellido_materno, string pro_correo,
        string lab_codigo, int lab_npiso, int lab_ncomputadoras,
        int _dia, int _hi, int _hf, int _nm)
    {
        curso = new CCurso(cur_codigo, cur_nombres, cur_pre_requisito, cur_ciclo, cur_creditos);
        profesor = new CProfesor(pro_codigo, pro_nombres, pro_apellido_paterno, pro_apellido_materno, pro_correo);
        laboratorio = new CLaboratorio(lab_codigo, lab_npiso, lab_ncomputadoras);
        dia = _dia;
        hora_inicio = _hi;
        hora_fin = _hf;
        if (_nm <= 25)
        {
            nmatriculados = _nm;
        }
    }

    virtual ~CSeccion()
    {
        delete curso;
        curso = nullptr;
        delete profesor;
        profesor = nullptr;
        delete laboratorio;
        laboratorio = nullptr;
        for (auto e : lista_alumnos)
        {
            delete e;
            e = nullptr;
        }
        lista_alumnos.clear();
    }

    void set_curso(string cur_codigo, string cur_nombres, string cur_pre_requisito, int cur_ciclo, int cur_creditos);
    void set_profesor(string pro_codigo, string pro_nombres, string pro_apellido_paterno, string pro_apellido_materno, string pro_correo);
    void set_laboratorio(string lab_codigo, int lab_npiso, int lab_ncomputadoras);
    void set_alumno(CAlumno *);
    void set_dia(int);
    void set_hora_inicio(int);
    void set_hora_fin(int);
    void set_numero_matriculados(int);

    CCurso *get_curso();
    CProfesor *get_profesor();
    CLaboratorio *get_laboratorio();
    vector<CAlumno *> get_lista_alumnos();
    int get_dia();
    int get_hora_inicio();
    int get_hora_fin();
    int get_numero_matriculados();

    void imprimir_datos();
};
#endif // __CSECCION_H__