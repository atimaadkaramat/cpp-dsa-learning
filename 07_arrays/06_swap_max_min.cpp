#include <iostream>
#include <climits>
using namespace std;

void swapMaxMin(int *arr, int size)
{
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[minIndex])
            minIndex = i;

        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    swap(arr[minIndex], arr[maxIndex]);
}

int main()
{
    int arr[] = {8, 6, 9, 3, 4, 5};
    int size = 6;

    swapMaxMin(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}