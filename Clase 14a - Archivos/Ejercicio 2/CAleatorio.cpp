#include "CAleatorio.h"

void CAleatorio::InsertSort()
{
    int n = numeros.size();
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = numeros[i];
        j = i - 1;

        while (j >= 0 && numeros[j] > key)
        {
            numeros[j + 1] = numeros[j];
            j = j - 1;
        }
        numeros[j + 1] = key;
    }
}

void CAleatorio::QuickSort(int low, int high)
{
    if (low < high)
    {

        // find the pivot element such that
        // elements smaller than pivot are on left of pivot
        // elements greater than pivot are on righ of pivot
        int pi = partition(low, high);

        // recursive call on the left of pivot
        QuickSort(low, pi - 1);

        // recursive call on the right of pivot
        QuickSort(pi + 1, high);
    }
}

// function to swap elements
void CAleatorio::swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// function to rearrange numeros (find the partition point)
int CAleatorio::partition(int low, int high)
{

    // select the rightmost element as pivot
    int pivot = numeros[high];

    // pointer for greater element
    int i = (low - 1);

    // traverse each element of the numeros
    // compare them with the pivot
    for (int j = low; j < high; j++)
    {
        if (numeros[j] <= pivot)
        {

            // if element smaller than pivot is found
            // swap it with the greater element pointed by i
            i++;

            // swap element at i with element at j
            swap(&numeros[i], &numeros[j]);
        }
    }

    // swap pivot with the greater element at i
    swap(&numeros[i + 1], &numeros[high]);

    // return the partition point
    return (i + 1);
}