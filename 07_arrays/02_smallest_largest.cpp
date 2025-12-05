#include <iostream>
#include <climits>
using namespace std;

void small(int arr[],int size){

    int smallest = INT_MAX; 

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        
    }

    cout << "smallest = " << smallest << endl;
    
}

void larg(int arr[],int size){

    int largest = INT_MIN; 

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        
    }

    cout << "largest = " << largest << endl;
    
}




int main(){

    int arr[] = {6,8,4,2,5};
    int size = 5;

    small(arr, size);
    larg(arr, size);
}