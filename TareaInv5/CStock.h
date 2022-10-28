#include <iostream>
#include <vector>
#include "CDisfraz.h"

using namespace std;

class CStock
{
private:
    vector<CDisfraz> *stock;

public:
    CStock() {}
    CStock(const vector<CDisfraz> *);

    virtual ~CStock() {}

    void set_stock(CDisfraz &);
    void update_stock(CDisfraz &);
    void print_stock();
};