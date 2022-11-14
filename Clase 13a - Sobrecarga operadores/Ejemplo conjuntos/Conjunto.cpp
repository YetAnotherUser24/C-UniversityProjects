#include <algorithm>
#include "Conjunto.h"

void Conjunto::agregar_elemento(const TypeElemento &value)
{ //-------------------------------------------------------
    auto it = lower_bound(begin(elementos), end(elementos), value);
    elementos.insert(it, value);
}

void Conjunto::operator<<(const TypeElemento &value)
{ //--------------------------------------------------------
    auto it = lower_bound(begin(elementos), end(elementos), value);
    elementos.insert(it, value);
}
Conjunto Conjunto::operator+(const Conjunto &other)
{ //-------------------------------------------------
    vector<TypeElemento> vector_union{elementos};

    for (auto e : other.elementos)
    {
        auto it = lower_bound(begin(vector_union), end(vector_union), e);

        if (*it != e)
            vector_union.insert(it, e);
    }

    Conjunto cu;
    for (auto e : vector_union)
    {
        cu << e;
    }

    return cu;
}
Conjunto Conjunto::operator-(const Conjunto &other)
{ //------------------------------------------------
    vector<TypeElemento> vector_diferencia;

    for (auto e : elementos)
    {
        auto it = find(begin(other.elementos), end(other.elementos), e);
        if (it == end(other.elementos))
            vector_diferencia.push_back(e);
    }

    Conjunto cd;
    for (auto e : vector_diferencia)
    {
        cd << e;
    }
    return cd;
}
Conjunto Conjunto::operator*(const Conjunto &other)
{ //------------------------------------------------
    vector<TypeElemento> vector_interseccion;

    for (auto e : elementos)
    {
        auto it = find(begin(other.elementos), end(other.elementos), e);
        if (it != end(other.elementos))
            vector_interseccion.push_back(e);
    }

    Conjunto ci;
    for (auto e : vector_interseccion)
    {
        ci << e;
    }

    return ci;
}
ostream &operator<<(ostream &output, Conjunto &c)
{ //------Para imprimir el conjunto-------------
    output << "[";
    auto it = begin(c.elementos);
    while (it != end(c.elementos) - 1)
    {
        output << *it << ", ";
        ++it;
    }
    output << *it << "]";
    return output;
}
