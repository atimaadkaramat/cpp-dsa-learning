#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4}; 

    int a = 10;
    int* ptr = &a;

    cout << ptr << endl;
    cout << &a << endl;

    ptr++; // hexadecimal + 4 bytes
    cout << ptr << endl; 

    cout << *arr << endl; // index 0 -> 1
    cout << *(arr+1) << endl; // index 1 -> 2
    cout << *(arr+2) << endl; // index 2 -> 3
    cout << *(arr+3) << endl; // index 3 -> 4 

    return 0;
}