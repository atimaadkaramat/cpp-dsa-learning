#include <iostream>
using namespace std;

int main(){

    int arr[5];


    // Array input
    for (int i = 0; i < 5; i++)
    {

        cout << "Add number in array: ";
        cin >> arr[i];
    
    }

    cout << endl;

    // Array output
    cout << "Display array elements: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}