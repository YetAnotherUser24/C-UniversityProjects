#include "CEsfera.h"
#include "CTetraedro.h"
#include "CHexaedro.h"
#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));

    cout << "Esferas: defecto y asignacion:";
    auto esfera = new CEsfera();
    cout << esfera->get_x() << endl;
    cout << esfera->get_y() << endl;
    cout << esfera->get_z() << endl;
    cout << esfera->get_radio();

    cout << endl
         << endl;
    auto esfera1 = new CEsfera(4, 5, 6, 7);
    cout << esfera1->get_x() << endl;
    cout << esfera1->get_y() << endl;
    cout << esfera1->get_z() << endl;
    cout << esfera1->get_radio();

    cout << endl
         << endl;
    cout << "Hexaedro: defecto y asignacion:";
    auto hexaedro = new CHexaedro();
    cout << hexaedro->get_x() << endl;
    cout << hexaedro->get_y() << endl;
    cout << hexaedro->get_z() << endl;
    cout << hexaedro->get_lado();

    cout << endl
         << endl;
    auto hexaedro1 = new CHexaedro(4, 5, 6, 7);
    cout << hexaedro1->get_x() << endl;
    cout << hexaedro1->get_y() << endl;
    cout << hexaedro1->get_z() << endl;
    cout << hexaedro1->get_lado();

    cout << endl
         << endl;
    cout << "Tetraedros: defecto y asignacion:";
    auto tetraedro = new CTetraedro();
    cout << tetraedro->get_x() << endl;
    cout << tetraedro->get_y() << endl;
    cout << tetraedro->get_z() << endl;
    cout << tetraedro->get_lado();

    cout << endl
         << endl;
    auto tetraedro1 = new CTetraedro(4, 5, 6, 7);
    cout << tetraedro1->get_x() << endl;
    cout << tetraedro1->get_y() << endl;
    cout << tetraedro1->get_z() << endl;
    cout << tetraedro1->get_lado();
}
