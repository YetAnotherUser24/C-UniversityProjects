#include "Curso.h"
#include "cmath"
#include <iomanip>

void Curso::add_alumno(Alumno *alumno)
{
    Alumnos.emplace_back(alumno);
}

void Curso::delete_alumno(string _codigo)
{
    int N = Alumnos.size();

    for (int i = 0; i < N; i++)
    {
        if (Alumnos[i]->get_codigo() == _codigo)
        {

            Alumnos.erase(Alumnos.begin() + i);
        }
    }
}

int Curso::aprobados()
{
    int aprov = 0;
    for (auto e : Alumnos)
    {
        aprov += int(e->get_status());
    }

    return aprov;
}

int Curso::desaprobados()
{
    int N = Alumnos.size();
    int aprov;
    aprov = aprobados();

    return N - aprov;
}

double Curso::estadistic_media()
{
    double media;
    double N = Alumnos.size();
    for (auto e : Alumnos)
    {
        media = media + e->get_nota_final();
    }
    media = media / N;

    return media;
}

double Curso::estadistic_moda()
{
    int apariciones = 0;
    int aparicion_mayor = -1;
    double moda;
    int N = Alumnos.size();

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (Alumnos[i]->get_nota_final() == Alumnos[j]->get_nota_final())
            {
                apariciones++;
            }
        }
        if (apariciones > aparicion_mayor)
        {
            aparicion_mayor = apariciones;
            moda = Alumnos[i]->get_nota_final();
        }
        apariciones = 0;
    }

    return moda;
}

double Curso::estadistic_mediana()
{
    int N = Alumnos.size();
    double mediana;

    if (N % 2 != 0)
    {
        mediana = Alumnos[N / 2]->get_nota_final();
    }
    else
    {
        mediana = (Alumnos[(N - 1) / 2]->get_nota_final() + Alumnos[N / 2]->get_nota_final()) / 2.0;
    }

    return mediana;
}

double Curso::estadistic_desviacion_media()
{
    int N = Alumnos.size();
    double media;
    media = estadistic_media();
    double desviacionM = 0;

    for (auto e : Alumnos)
    {
        desviacionM = desviacionM + abs(e->get_nota_final() - media);
    }

    desviacionM = desviacionM / N;

    return desviacionM;
}

double Curso::estadistic_varianza()
{
    double media;
    media = estadistic_media();
    double varianza = 0;
    int N = Alumnos.size();

    for (auto e : Alumnos)
    {
        varianza = varianza + pow(abs(e->get_nota_final()), 2);
    }

    varianza = varianza / N;

    return varianza;
}

double Curso::estadistic_desviacion_std()
{
    double media;
    media = estadistic_media();
    double desviacionS = 0;
    int N = Alumnos.size();

    for (auto e : Alumnos)
    {
        desviacionS = desviacionS + pow(abs(e->get_nota_final()), 2);
    }

    desviacionS = pow(desviacionS / N, 0.5);

    return desviacionS;
}

double Curso::aprobados_promedio()
{

    double media;
    double N = Alumnos.size();
    for (auto e : Alumnos)
    {
        media = media + int(e->get_status());
    }
    media = media / N * 100;

    return media;
}

void Curso::print_estadistics()
{
    cout << "\n\nESTADISTICAS DEL CURSO";
    cout << "\n-------------------------------------";
    cout << "\nN° de alumnos: " << Alumnos.size();
    cout << "\nN° de alumnos aprobados: " << aprobados();
    cout << "\nN° de alumnos desaprobados: " << desaprobados();
    cout << "\nPromedio de alumnos aprobados: " << aprobados_promedio() << '%';
    cout << "\nNota media: " << estadistic_media();
    cout << "\nNota común: " << estadistic_moda();
    cout << "\nNota mediana: " << estadistic_mediana();
    cout << "\nDesviacion de la nota media: " << estadistic_desviacion_media();
    cout << "\nVarianza de la nota: " << estadistic_varianza();
    cout << "\nDesviacion estándar de la nota: " << estadistic_desviacion_std();
}
