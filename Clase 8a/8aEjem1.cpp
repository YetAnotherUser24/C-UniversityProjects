#include <iostream>
#include "CTriangulo.h"
using namespace std;

int main() {
    CTriangulo tri1, tri2(2,5, 6);
    cout << tri2.area() << endl;
    cout << tri2.perimetro() << endl;
    return 0;
}
