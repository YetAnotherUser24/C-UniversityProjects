

#include <iostream>

using namespace std;

class CAlumno
{
private:
    string nombre, apellidos;
    int edad, creditos;

public:
    // Constructor
    CAlumno() {}
    CAlumno(string _nombre, string _apellidos, int _edad, int _creditos)
    {
        nombre = _nombre;
        apellidos = _apellidos;
        edad = _edad;
        creditos = _creditos;
    }

    // Destructor
    ~CAlumno() {}

    // Métodos
    void setNombre(string _nombre);
    void setApellidos(string _apellidos);
    void setEdad(int _edad);
    void setCreditos(int creditos);

    string getNombre();
    string getApellidos();
    int getEdad();
    int getCreditos();
};