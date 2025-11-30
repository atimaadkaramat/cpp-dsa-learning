#include <iostream>
using namespace std;

int main(){

    int count;
    char letter;

    cout << "Enter any number for pattern: ";
    cin >> count;

    cout << "Enter any char for pattern: ";
    cin >> letter;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout << letter;
            letter++;
        }
        
        cout << endl;
    }
    
    return 0;
}