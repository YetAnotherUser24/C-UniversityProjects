#include "CAlumno.h"
#include "CProfesor.h"
#include "CFuncionesAP.h"

int main()
{
    int n = 0;

    string _nombre, _apellido, _tipo;
    int _edad, _creditos, _horas;

    cout << "Numero de objetos (0 para iniciar con algunos por defecto): ";
    cin >> n;

    if (n <= 0)
    {
        n = 4;
        cout << "Vaya con que no quieres crear ningun tipo de objeto, bueno aqui tienes un par por defecto";
        cout << "\nCreando 4 objetos Alumno, 4 objetos Profesor...\n\n";

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

        cout << "\nALUMNOS:\n";
        imprimir(Alumnos, n);
        cout << "\nEl mayor es: " << get_mayor(Alumnos, n)->get_nombres();
        ordenar(Alumnos, n);
        imprimir(Alumnos, n);
        cout << '\n';
        cout << "\nPROFESORES:\n";
        imprimir(Profesores, n);
        cout << "\nEl mayor es: " << get_mayor(Profesores, n)->get_nombres();
        ordenar(Profesores, n);
        imprimir(Profesores, n);

        delete[] Profesores;
        Profesores = nullptr;
        delete[] Alumnos;
        Alumnos = nullptr;
        delete Jose;
        Jose = nullptr;
        delete German;
        German = nullptr;
        delete Lucy;
        Lucy = nullptr;
        delete Zoey;
        Zoey = nullptr;
        delete Henry;
        Henry = nullptr;
        delete Patricia;
        Patricia = nullptr;
        delete Oscar;
        Oscar = nullptr;
        delete Rosulo;
        Rosulo = nullptr;
        return 0;
    }

    cout << "Tipo de objeto: (Alumno o Profesor): ";
    cin >> _tipo;
    if (_tipo == "Alumno")
    {
        auto Alumnos = new CAlumno *[n];
        for (int i = 0; i < n; i++)
        {
            cout << "\n\nComplete los siguientes datos de la siguiente forma dejando un espacio";
            cout << "\n(Nombre, Apellido, edad, creditos):";
            cin >> _nombre >> _apellido >> _edad >> _creditos;
            auto A = new CAlumno(_nombre, _apellido, _edad, _creditos);
            Alumnos[i] = A;
        }
        imprimir(Alumnos, n);
        cout << "\nEl mayor es: " << get_mayor(Alumnos, n)->get_nombres();
        ordenar(Alumnos, n);
        imprimir(Alumnos, n);
    }
    else if (_tipo == "Profesor")
    {
        auto Profesores = new CProfesor *[n];
        for (int i = 0; i < n; i++)
        {
            cout << "\n\nComplete los siguientes datos de la siguiente forma dejando un espacio";
            cout << "\n(Nombre, Apellido, edad, horas dictadas): ";
            cin >> _nombre >> _apellido >> _edad >> _horas;
            auto B = new CProfesor(_nombre, _apellido, _edad, _horas);
            Profesores[i] = B;
            imprimir(Profesores, n);
        }
        cout << "\nEl mayor es: " << get_mayor(Profesores, n)->get_nombres();
        ordenar(Profesores, n);
        imprimir(Profesores, n);
    }

    return 0;
}
