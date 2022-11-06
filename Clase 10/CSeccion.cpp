#include "CSeccion.h"

void CSeccion::set_curso(string cur_codigo, string cur_nombres, string cur_pre_requisito, int cur_ciclo, int cur_creditos)
{
    curso = new CCurso(cur_codigo, cur_nombres, cur_pre_requisito, cur_ciclo, cur_creditos);
}

void CSeccion::set_profesor(string pro_codigo, string pro_nombres, string pro_apellido_paterno, string pro_apellido_materno, string pro_correo)
{
    profesor = new CProfesor(pro_codigo, pro_nombres, pro_apellido_paterno, pro_apellido_materno, pro_correo);
}

void CSeccion::set_laboratorio(string lab_codigo, int lab_npiso, int lab_ncomputadoras)
{
    laboratorio = new CLaboratorio(lab_codigo, lab_npiso, lab_ncomputadoras);
}

void CSeccion::set_alumno(CAlumno *_alum)
{
    if (lista_alumnos.size() < 25)
    {
        lista_alumnos.emplace_back(_alum);
    }
    else
    {
        cout << "\nSeccion llena...";
    }
}

void CSeccion::set_dia(int _dia)
{
    dia = _dia;
}

void CSeccion::set_hora_inicio(int _hi)
{
    hora_inicio = _hi;
}

void CSeccion::set_hora_fin(int _hf)
{
    hora_fin = _hf;
}

void CSeccion::set_numero_matriculados(int _nm)
{
    nmatriculados = _nm;
}

CCurso *CSeccion::get_curso()
{
    return curso;
}

CProfesor *CSeccion::get_profesor()
{
    return profesor;
}

CLaboratorio *CSeccion::get_laboratorio()
{
    return laboratorio;
}

vector<CAlumno *> CSeccion::get_lista_alumnos()
{
    return lista_alumnos;
}

int CSeccion::get_dia()
{
    return dia;
}

int CSeccion::get_hora_inicio()
{
    return hora_inicio;
}

int CSeccion::get_hora_fin()
{
    return hora_fin;
}

int CSeccion::get_numero_matriculados()
{
    return nmatriculados;
}

void CSeccion::imprimir_datos()
{
    auto dias = new string[7]{"lunes", "martes", "miercoles", "jueves", "viernes", "sabado", "domingo"};
    cout << "\n\nDatos de la seccion: ";
    cout << "\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
    curso->imprimir_datos();
    profesor->imprimir_datos();
    laboratorio->imprimir_datos();
    cout << "\nDia y hora: " << dias[dia] << " desde las " << hora_inicio << "h hasta las " << hora_fin << "h";
    cout << "\nNumero de matriculados: " << nmatriculados;
    cout << "\n\nLista de inscritos:";
    cout << "\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
    for (auto e : lista_alumnos)
    {
        e->imprimir_datos();
    }

    delete[] dias;
    dias = nullptr;
}
