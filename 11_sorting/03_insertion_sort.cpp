#include <iostream>
#include <vector>
using namespace std;

void insertionSort(int arr[], int n) // O(n^2)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int previous = i-1;

        while (previous >=0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous];
            previous--;
        }

        arr[previous + 1] = current;
        
    }
    
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {4, 1, 5, 2, 3};
    int n = 5;

    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}