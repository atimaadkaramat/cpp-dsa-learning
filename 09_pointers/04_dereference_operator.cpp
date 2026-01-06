#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int* ptr = &a; // pointer
    int** ptr2 = &ptr; // pointer to pointer

    
    cout << ptr2 << endl; // pointing to address of pointer
    cout << *ptr2 << endl; // go to address of pointer
    cout << **ptr2 << endl; // go to address of pointer then go to address of a
    
    cout << ptr  << endl; // pointing to address of a 
    cout << &a << endl; // Address of int a
    return 0;
}