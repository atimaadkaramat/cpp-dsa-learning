#include <iostream>
using namespace std;

int main(){

    int count, num = 1;

    cout << "Enter any number for pattern: ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < (i+1); j++)
        {
            cout << num;
            num++;
        }

        cout << endl;
        
    }
    
}