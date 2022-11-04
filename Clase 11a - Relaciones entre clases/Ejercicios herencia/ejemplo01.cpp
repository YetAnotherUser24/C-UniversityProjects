// Created by Jose Fiestas on 11/17/20.
#include <iostream>
using namespace std;

class Persona
{ // clase base
    string nombre;

protected:
    int edad;

public:
    // constructor por defecto y asignacion
    Persona() {}
    Persona(string _nombre, int _edad) : nombre(_nombre), edad(_edad) {}
    // metodos
    string get_nombre() { return nombre; }
    int get_edad() { return edad; }
    // destructor
    virtual ~Persona() { cout << "Objeto de clase Persona es destruido" << endl; }
};

class Cientifico : public Persona
{ // clase derivada de Persona
    string especialidad;

public:
    // constructor por defecto y asignacion
    Cientifico() { edad = 0; }
    Cientifico(string _n, int _e, string _s) : Persona(_n, _e), especialidad(_s) {}
    string get_especialidad() { return especialidad; }
    // destructor
    ~Cientifico() { cout << "Objeto de clase Cientifico es destruido" << endl; }
};

class Ingeniero : public Persona
{
    string titulo;

public:
    // constructor por defecto y asignacion
    Ingeniero() {}
    Ingeniero(string n, int e, string t) : Persona(n, e), titulo(t) {}
    string get_titulo() { return titulo; }
    // destructor
    ~Ingeniero() { cout << "Objeto de clase Ingeniero es destruído" << endl; }
};

class Biologo : public Persona
{
    string area;

public:
    // constructor por defecto y asignacion
    Biologo() {}
    Biologo(string n, int e, string a) : Persona(n, e), area(a) {}
    string get_area() { return area; }
    // destructor
    ~Biologo() { cout << "Objeto de clase Biologo es destruído" << endl; }
};
int main()
{
    // generar un puntero a objeto de clase Persona e imprimir sus datos
    auto Jose = new Persona("Jose", 30);
    cout << "Objeto Persona creado, de nombre " << Jose->get_nombre() << " y edad "
         << Jose->get_edad() << endl;
    // generar un puntero a objeto de clase Cientifico e imprimir sus datos
    auto Sagan = new Cientifico("Carl Sagan", 50, "Astrofísico");
    cout << "Objeto Cientifico creado, de nombre " << Sagan->get_nombre() << ", edad "
         << Sagan->get_edad() << ", y especialidad " << Sagan->get_especialidad() << endl;
    // generar un puntero a objeto de clase Ingeniero e imprimir sus datos
    auto Taylor = new Ingeniero("Frederick Taylor", 80, "Ingeniero Industrial");
    cout << "Objeto Ingeniero creado, de nombre " << Taylor->get_nombre() << ", edad "
         << Taylor->get_edad() << ", y titulo " << Taylor->get_titulo() << endl;
    // generar un puntero a objeto de clase Biologo e imprimir sus datos
    auto Paabo = new Biologo("Svante Paabo", 67, "Biologo");
    cout << "Objeto Biologo creado, de nombre " << Paabo->get_nombre() << ", edad "
         << Paabo->get_edad() << ", y area " << Paabo->get_area() << endl;

    delete Jose;
    delete Sagan;
    delete Taylor;
    delete Paabo;
}