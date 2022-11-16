#ifndef __CALEATORIO_H__
#define __CALEATORIO_H__

#include <iostream>
#include <Vector>
using namespace std;
class CAleatorio
{
private:
    vector<int> numeros;
    bool loaded;
    void InsertSort();
    void QuickSort(int low, int high);
    void swap(int *a, int *b);
    int partition(int low, int high);

public:
    CAleatorio();
    void LoadData();
    void Sort();
    void Show();
    int BinarySearch();
};

#endif // __CALEATORIO_H__