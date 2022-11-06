#include "CSeccion.h"

int main()
{
    // Para este caso y para la demostración, solo usaremos un constructor para definir una sección

    auto Teo2 = new CSeccion("CS1002", "Programacion orientada a objetos", "CS1001", 2, 4,
                             "P202201", "Henry Giovanny", "Gallegos", "Velgara", "hgallegos@utec.edu.pe",
                             "M602", 6, 25,
                             0, 9, 11, 3);

    auto Samir = new CAlumno("202210611", "Samir Stefano", "Suarez", "Rios", "samir.suarez@utec.edu.pe", 17, 20);
    auto Ashly = new CAlumno("202120223", "Fabiola Ashly", "Fuentes", "Cosme", "fabiola.fuentes@utec.edu.pe", 18, 20);
    auto Carlos = new CAlumno("202210301", "Carlos Alberto", "Rojas", "Tenorio", "carlos.rojas@utec.edu.pe", 18, 20);

    Teo2->set_alumno(Samir);
    Teo2->set_alumno(Ashly);
    Teo2->set_alumno(Carlos);
    Teo2->imprimir_datos();

    delete Teo2;
    Teo2 = nullptr;
    return 0;
}