#include <iostream>
using namespace std;

void unique(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    arr[i] = arr[j] = 0;
                }
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        if(arr[i] != 0)
            cout << arr[i] << " "; 
    }
    
}

int main()
{

    int arr[] = {1, 2, 1, 2, 6};
    int size = 5;

    unique(arr, size);

    return 0;
}