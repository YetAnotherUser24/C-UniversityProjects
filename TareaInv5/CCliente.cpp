#include "CCliente.h"

CCliente::CCliente(string _nombre, int _antiguedad)
{
    nombre = _nombre;
    antiguedad = _antiguedad;
}

void CCliente::set_nombre(string _nombre)
{
    nombre = _nombre;
}
void CCliente::set_antiguedad(int _antiguedad)
{
    antiguedad = _antiguedad;
}
string CCliente::get_nombre()
{
    return nombre;
}
int CCliente::get_antiguedad()
{
    return antiguedad;
}

void CCliente::compra(CStock *tienda)
{
    string tipo;
    int cant;
    double costo = 0;

    for (int i = 0; i < tienda->get_stock().size(); i++)
    {
        cout << "\n\nIngrese el tipo de disfraz: ";
        cin >> tipo;
        cout << "\nIngrese la cantidad que necesita del tipo: ";
        cin >> cant;

        for (auto e : tienda->get_stock())
        {
            if (tipo == e->get_tipo())
            {
                auto A = new CDisfraz(tipo, e->get_precio(), -1 * cant);
                tienda->update_stock(A);
                costo += cant * e->get_precio();

                A->set_cantidad(cant);
                sclient->set_stock(A);
            }
        }
    }

    sclient->print_stock();
    if (antiguedad >= 2)
    {
        costo = costo * 75 / 100;
    }

    cout << "\n\nY finalmente su monto total a pagar es: S/." << costo;
}

void CCliente::mensaje()
{
    int cant = 0;
    for (auto e : sclient->get_stock())
    {
        cant += e->get_cantidad();
    }

    if (cant < 15 || sclient->get_stock().size() < 5)
    {
        cout << "\n\nOIGA NO SE OLVIDE QUE SON 15 NIÑOS Y QUE NECESITA ALMENOS 1 TIPO DE CADA UNO, VUELVA A COMPRAR MÁS DISFRACES PARA TODOS DE NUEVO, TACAÑO\n";
    }
}

void CCliente::create_stock(CStock *_stock)
{
    sclient = _stock;
}