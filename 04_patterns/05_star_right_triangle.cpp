#include <iostream>
using namespace std;

int main(){

    int count, space;

    cout << "Enter any number for pattern: ";
    cin >> count;

    for (int line = 0; line < count; line++)
    {
        for (space = (count - line); space > 1; space--)
        {
           cout << " ";
        }
        for (int star = 0; star <= line; star++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}