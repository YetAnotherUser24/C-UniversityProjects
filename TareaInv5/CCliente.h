#include <iostream>
#include "CStock.h"
using namespace std;

class CCliente
{
private:
    string nombre;
    int antiguedad;
    CStock *sclient;

public:
    CCliente() {}
    CCliente(string, int);

    void set_nombre(string);
    void set_antiguedad(int);

    string get_nombre();
    int get_antiguedad();
    void compra(CStock *tienda);
    void mensaje();
    void create_stock(CStock *_stock);
};