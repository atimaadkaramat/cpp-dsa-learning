#include <iostream>
using namespace std;

int main()
{

    int* ptr1; // 100
    int* ptr2 = ptr1 + 2; // 108

    cout << ptr2 - ptr1 << endl; // 2 bytes

    cout << (ptr2 == ptr1) << endl; // 0
    cout << (ptr2 > ptr1) << endl; // 1

    return 0;
}