#include <iostream>
using namespace std;

int main(){

    int count;

    cout << "enter number: ";
    cin >> count;

    int i = 0;
    while (i <= count)  // while loop
    {
        
        cout << " " << i;
        i++;
    }
    
    cout << endl;

    for (int i = 0; i <= count; i++) // for loop
    {
        if (i%2 == 0) // if condition
        {
            cout << " " << i;
        }
        
    }
    
    cout << endl;

    do      // do-while loop
    {
        cout << " " << i;
        i--;
    } while (i >= 0);


    return 0;
}