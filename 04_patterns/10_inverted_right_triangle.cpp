#include <iostream>
using namespace std;

int main(){

    int count;

    cout << "Enter any number for pattern: ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        for (int x = 0; x < i; x++)
        {
            cout << " ";
        }
        
        for (int j = i; j < count; j++)
        {
            cout << i+1;
        }

        cout << endl;
        
    }
    
}