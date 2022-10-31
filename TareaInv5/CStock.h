#include <iostream>
#include <vector>
#include "CDisfraz.h"

using namespace std;

class CStock
{
private:
    vector<CDisfraz *> stock;

public:
    CStock() {}

    virtual ~CStock() {}

    int set_stock(CDisfraz *);
    void update_stock(CDisfraz *);
    void print_stock();
    vector<CDisfraz *> get_stock();
};