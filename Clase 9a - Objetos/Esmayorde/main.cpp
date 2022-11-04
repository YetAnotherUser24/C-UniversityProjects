#include "CAlumno.h"
#include "CProfesor.h"
#include "CFuncionesAP.h"

int main()
{
    int n = 4;
    auto Jose = new CAlumno("Jose", "Fiestas", 29, 4);
    auto German = new CAlumno("German", "Garmendia", 18, 3);
    auto Lucy = new CAlumno("Lucy", "PortGas", 31, 5);
    auto Zoey = new CAlumno("Zoey", "101", 20, 4);

    auto Henry = new CProfesor("Henry", "Gallegos", 32, 102);
    auto Patricia = new CProfesor("Patricia", "Reynoso", 35, 204);
    auto Oscar = new CProfesor("Oscar", "Hidalgo", 50, 300);
    auto Rosulo = new CProfesor("Rosulo", "Perez", 41, 72);

    auto Alumnos = new CAlumno *[n];
    Alumnos[0] = Jose;
    Alumnos[1] = German;
    Alumnos[2] = Lucy;
    Alumnos[3] = Zoey;

    auto Profesores = new CProfesor *[n];
    Profesores[0] = Henry;
    Profesores[1] = Patricia;
    Profesores[2] = Oscar;
    Profesores[3] = Rosulo;

    imprimir(Profesores, n);
    cout << "\nEl mayor es: " << get_mayor(Profesores, n)->get_nombres();
    ordenar(Profesores, n);
    imprimir(Profesores, n);

    cout << '\n';

    imprimir(Alumnos, n);
    cout << "\nEl mayor es: " << get_mayor(Alumnos, n)->get_nombres();
    ordenar(Alumnos, n);
    imprimir(Alumnos, n);
}