
#include "CBattleBox.h"
#include <string>
#include <iomanip>
#include <algorithm>

void CBattleBox::resizePlano(TipoEntero pAltura, TipoEntero pAncho)
{
    m_Plano.resize(pAltura);
    for (auto &item : m_Plano)
        item.resize(pAncho);
}
CBattleBox::CBattleBox()
{
    /*m_Plano.resize(ALTURA);
    for (auto& item: m_Plano)
        item.resize(ANCHO);*/
    resizePlano(ALTURA, ANCHO);
}
CBattleBox::CBattleBox(TipoEntero pAltura, TipoEntero pAncho)
{
    /*m_Plano.resize(pAltura);
    for (auto& item: m_Plano)
        item.resize(pAncho);*/
    resizePlano(pAltura, pAncho);
}
CBattleBox::~CBattleBox() {}
void CBattleBox::adicionarRobot(CRobot *pRobot)
{
    m_Robots.emplace_back(pRobot);
}
CRobot *CBattleBox::removerRobot(TipoString pNombre)
{
    // Buscando objeto
    if (m_Robots.size() == 0)
        return nullptr;

    auto iter = find_if(begin(m_Robots), end(m_Robots),
                        [pNombre](CRobot *obj)
                        { return obj->getNombre() == pNombre; });
    if (iter == end(m_Robots))
        return nullptr;
    // Eliminando objeto
    m_Robots.erase(iter);
    return *iter;
}

void CBattleBox::imprimirRobots(ostream &os)
{
    int i = 0;
    for (auto &item : m_Robots)
    {
        os << "* * * * * * [" << i << "] ";
        os << " Nombre = " << item->getNombre() << " "
           << item->mostrarPosicion()
           << " Color = " << item->getColor() << '\n';
        i++;
    }
}

void CBattleBox::actualizarBattleBox()
{
    for (auto &row : m_Plano)
        for (auto &cell : row)
            cell = COLOR;

    for (auto &item : m_Robots)
        m_Plano[item->getPosX()][item->getPosY()] = item->getColor();
}

void CBattleBox::dibujarBattleBox(ostream &os)
{
    os << '\n';
    os << setw(3) << ' ';
    for (auto j = 0; j < getAncho(); ++j)
        os << setw(3) << j;
    os << '\n';

    for (auto i = 0; i < getAltura(); ++i)
    {
        os << setw(3) << i;
        for (auto j = 0; j < getAncho(); ++j)
        {
            os << setw(3) << m_Plano[i][j];
        }
        os << '\n';
    }
}

TipoEntero CBattleBox::getAltura()
{
    return m_Plano.size();
}

TipoEntero CBattleBox::getAncho()
{
    return m_Plano[0].size();
}

void CBattleBox::pelear()
{
    for (auto &robot : m_Robots)
    {
        robot->pelear(m_Robots);
    }
}