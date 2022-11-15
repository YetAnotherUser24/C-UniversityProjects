#include <iostream>
#include <iomanip>
#include <vector>
#include "ConjuntoPersonas.h"
#include "Persona.h"
using namespace std;

int main()
{
    auto p1 = new Persona("Jose", "HuellaDigital");
    auto p2 = new Persona("Samir", "IdentificacionFacial");
    auto p3 = new Persona("Fabiola", "FirmaDigital");
    vector<Persona *> people = {p1, p2, p3};
    auto conjunto_personas = new ConjuntoPersonas(people);

    /* 1 - Imprime el nombre de la persona y su tipo de identificacion */
    cout << "Test 1\n";
    cout << "--------------------------";
    conjunto_personas->print();

    /*2 - Cambia el tipo de identificacion de la persona al dado
    como parametro*/
    cout << "\n\nTest 2\n";
    cout << "--------------------------";
    p1->cambio_identificacion("FirmaDigital");
    conjunto_personas->print();

    /*3 - extra -> Al colocar la clave de administrador, imprime el nombre
    de las personas, sus tipos de identificacion y sus identificaciones*/
    cout << "\n\nTest 3\n";
    cout << "--------------------------";
    conjunto_personas->print(1234);

    /*4 - Extrae a la persona, usando su nombre como parametro, de la
    lista, mas no la elimina*/
    cout << "\n\nTest 4\n";
    cout << "--------------------------";
    conjunto_personas->extraer("Jose");
    conjunto_personas->print(1234);

    /*5 - Confirma la identificacion de una persona, en caso ser confirmada
    concederá el acceso. Caso contrario, generará un error y denegará el
    acceso al intruso*/
    cout << "\n\nTest 5\n";
    cout << "--------------------------";
    conjunto_personas->confirmacion();

    // LIBERACION DE MEMORIA
    delete p1;
    p1 = nullptr;

    delete conjunto_personas;
    conjunto_personas = nullptr;

    people.clear();

    return 0;
}