#include <iostream>

using namespace std;

class CProfesor
{
private:
    string nombre, apellidos;
    int edad, horasdictadas;

public:
    // Constructor
    CProfesor() {}
    CProfesor(string _nombre, string _apellidos, int _edad, int _horasdictadas)
    {
        nombre = _nombre;
        apellidos = _apellidos;
        edad = _edad;
        horasdictadas = _horasdictadas;
    }

    // Destructor
    ~CProfesor() {}

    // Métodos
    void setNombre(string _nombre);
    void setApellidos(string _apellidos);
    void setEdad(int _edad);
    void setHorasDictadas(int _horasdictadas);

    string getNombre();
    string getApellidos();
    int getEdad();
    int getHorasDictadas();
};