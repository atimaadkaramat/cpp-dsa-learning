#include <iostream>
using namespace std;

void input(int arr[],int size){

    cout << "Input array elements:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
}

void output(int arr[],int size){

    cout << "\nThe array elements are:\n ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<  " "; 
    }
    
}


int main(){

    int arr[10];
    int size = 10;

    input(arr, size);
    output(arr, size);
}