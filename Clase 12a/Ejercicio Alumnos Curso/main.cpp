#include "Curso.h"
#include "A_Posgrado.h"
#include "A_Pregrado.h"

int main()
{
    auto Progra = new Curso();

    auto Samir = new A_Pregrado("Samir", "202210611", 14, 16.5, 19, 15);
    auto Yoshua = new A_Pregrado("Yoshua", "202278812", 20, 16, 12, 14);
    auto Ashly = new A_Pregrado("Ashly", "202110911", 20, 18, 20, 20);
    auto Jefferson = new A_Posgrado("Jefferson", "202210275", "Lambayeque", 0, 8, 20);
    auto Jean = new A_Posgrado("Jean", "");

    Samir->nota_final();
    Yoshua->nota_final();
    Ashly->nota_final();
    Jefferson->nota_final();
    Jean->nota_final();

    Samir->aprobado();
    Yoshua->aprobado();
    Ashly->aprobado();
    Jefferson->aprobado();
    Jean->nota_final();

    cout << Samir->get_nota_final() << endl;
    cout << Yoshua->get_nota_final() << endl;
    cout << Ashly->get_nota_final() << endl;
    cout << Jefferson->get_nota_final() << endl;
    cout << Jean->get_nota_final() << endl;

    Progra->add_alumno(Samir);
    Progra->add_alumno(Yoshua);
    Progra->add_alumno(Ashly);
    Progra->add_alumno(Jean);
    Progra->add_alumno(Jefferson);

    Progra->print_estadistics();
    return 0;
}
