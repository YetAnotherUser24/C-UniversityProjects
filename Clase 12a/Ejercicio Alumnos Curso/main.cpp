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
    auto Jean = new A_Posgrado("Jean", "201822783", "Lima", 7, 20, 18);
    auto Carlos = new A_Posgrado("Carlos", "201620617", "Callao", 18, 10, 13);
    auto Darcie = new A_Pregrado("Darcie", "202218945", 2, 6, 13, 14);
    auto Mauricio = new A_Pregrado("Mauricio", "202212346", 10, 10, 12, 8);
    auto Pierre = new A_Posgrado("Pierre", "201756881", "Lima", 16, 6, 10);
    auto Miguel = new A_Posgrado("Miguel", "201912367", "Barranco", 12, 15, 18);

    Progra->add_alumno(Samir);
    Progra->add_alumno(Yoshua);
    Progra->add_alumno(Ashly);
    Progra->add_alumno(Jean);
    Progra->add_alumno(Jefferson);
    Progra->add_alumno(Carlos);
    Progra->add_alumno(Darcie);
    Progra->add_alumno(Mauricio);
    Progra->add_alumno(Pierre);
    Progra->add_alumno(Miguel);

    Progra->notas_finales();

    Progra->print_estadistics();
    return 0;
}
