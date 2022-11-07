#include <iostream>

#include <iostream>
#include "array.h"
#include "tipos.h"

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    MyArray<int> a(arr, 5);
    int x = a.max();
    int y = a.min();
    std::cout << x << '\n';
    std::cout << y;
    return 0;
}
