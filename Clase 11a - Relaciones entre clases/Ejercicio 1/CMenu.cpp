#include "CMenu.h"
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

enum class Opciones
{
    Agregar = 1,
    Remover,
    Mostrar,
    Pelear
};

void limpiar()
{
    cout << "\033[2J\033[0;0H";
}

void esperar()
{
    char w;
    do
    {
        w = input<TipoCaracter>("Presione C y Enter para continuar...");
    } while (toupper(w) != 'C');
}

void Menu::imprimirMenu()
{
    limpiar();
    cout << "MENU\n";
    cout << string(4, '-') << "\n\n";
    cout << "1. Agregar un nuevo objeto\n";
    cout << "2. Remover objeto\n";
    cout << "3. Dibujar Mapa\n\n";
    cout << "4. Pelear\n\n";
    cout << "0. Para Salir\n\n";
}

void Menu::agregarObjeto()
{
    auto nombre = input<TipoString>("Ingrese Nombre : ");
    auto color = input<TipoCaracter>("Ingrese color (Un caracter): ");

    auto x = input<TipoEntero>("Ingrese posicion X : ");

    while (x < 0 || x >= m_BattleBox.getAncho())
    {
        cout << "Posicion X Incorrecta, los limites son: 0, "
             << m_BattleBox.getAncho() - 1 << "\n";
        x = input<TipoEntero>("Ingrese posicion X : ");
    }

    TipoEntero y = input<TipoEntero>("Ingrese posicion Y : ");
    while (y < 0 || y >= m_BattleBox.getAncho())
    {
        cout << "Posicion Y Incorrecta, los limites son: 0, "
             << m_BattleBox.getAltura() - 1 << "\n";
        y = input<TipoEntero>("Ingrese posicion Y : ");
    }

    m_BattleBox.adicionarRobot(new CRobot(nombre, color, x, y));
}

void Menu::removerObjeto()
{
    auto nombre = input<TipoString>("Ingrese Nombre: ");

    CRobot *obj = m_BattleBox.removerRobot(nombre);
    if (obj == nullptr)
    {
        cout << "Objeto No existe\n";
    }
    else
    {
        delete obj;
        cout << "Objeto: " << nombre << " ha sido removido\n";
    }
    esperar();
}

void Menu::dibujarMapa()
{
    limpiar();
    m_BattleBox.actualizarBattleBox();
    m_BattleBox.dibujarBattleBox(cout);
    cout << '\n';
    m_BattleBox.imprimirRobots(cout);
    cout << '\n';
    esperar();
}

void Menu::ejecutar()
{
    do
    {
        imprimirMenu();
        cin >> m_Opcion;
        seleccionarOpcion();
    } while (m_Opcion != 0);
    cout << "Fin del programa...\n";
}

void Menu::seleccionarOpcion()
{
    limpiar();
    switch (Opciones(m_Opcion))
    {
    case Opciones::Agregar: // Agregar Objeto
        agregarObjeto();
        break;
    case Opciones::Remover: // Remover Objeto
        removerObjeto();
        break;
    case Opciones::Mostrar: // Dibujando Tierra
        dibujarMapa();
        break;
    case Opciones::Pelear:
        m_BattleBox.pelear();
        break;
    }
}