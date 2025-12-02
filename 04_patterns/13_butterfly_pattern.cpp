#include <iostream>
using namespace std;

int main()
{

    int count;

    cout << "Enter any number for pattern: ";
    cin >> count;

    // top
    for (int i = 0; i < count; i++)
    {   
        // left
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        
        for (int j = 0; j < count-i-1; j++)
        {
            cout << " ";
        }
        
        // right
        for (int j = 0; j < count-i-1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }


        cout << endl;
    }
    
    // bottom
    for (int i = 0; i < count; i++)
    {
        // left
        for (int j = count-i; j > 0; j--)
        {
            cout << "*";
        }

        for (int j = i; j > 0; j--)
        {
            cout << " ";
        }

        // right
        for (int j = i; j > 0; j--)
        {
            cout << " ";
        }

        for (int j = count-i; j > 0; j--)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    
}