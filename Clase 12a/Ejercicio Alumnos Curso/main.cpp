#include "Curso.h"
#include "A_Posgrado.h"
#include "A_Pregrado.h"
#include <iomanip>

void vector_printer();

int main()
{
    auto Progra = new Curso();

    auto Samir = new A_Pregrado("Samir", "202210611", 14, 16.5, 19, 15);
    auto Yoshua = new A_Pregrado("Yoshua", "202278812", 20, 16, 12, 14);
    auto Ashly = new A_Pregrado("Ashly", "202110911", 20, 18, 20, 20);

    Samir->nota_final();
    Yoshua->nota_final();
    Ashly->nota_final();

    cout << Samir->get_nota_final() << endl;
    cout << Yoshua->get_nota_final() << endl;
    cout << Ashly->get_nota_final() << endl;

    Progra->add_alumno(Samir);
    Progra->add_alumno(Yoshua);
    Progra->add_alumno(Ashly);

    cout << Progra->estadistic_media();
    return 0;
}

void vector_printer(vector<double> &vec)
{
    cout << "[";
    for (auto &element : vec)
    {
        cout << setw(5) << element;
    }
    cout << "  ]";
}