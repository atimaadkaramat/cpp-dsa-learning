#include <iostream>
using namespace std;

int main(){

    int count;

    cout << "Enter any number for pattern: ";
    cin >> count;

    for (int i  = 0; i < count; i++)
    {
        for (int j = 0; j < (i+1); j++)
        {
            cout << (j+1);
        }
        
        cout << endl;
    }
    
}