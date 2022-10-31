#include <iostream>

using namespace std;

class CDisfraz
{
private:
    string tipo;
    double precio;
    int cantidad;

public:
    CDisfraz() { tipo = "", precio = 0, cantidad = 0; }
    CDisfraz(string, double, int);

    virtual ~CDisfraz() {}

    void set_tipo(string);
    void set_precio(double);
    void set_cantidad(int);

    string get_tipo();
    double get_precio();
    int get_cantidad();
};