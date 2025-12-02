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
        // spaces
        for (int j = 0; j < count-i-1; j++)
        {
            cout << " ";
        }
        

        cout << "*";

        if(i != 0){

            // spaces
            for (int k = 0; k < 2*i-1; k++)
            {
                cout << " ";
            }
            

            cout << "*";
        }
        
        cout << endl;
    }

    // bottom
    for (int i = 0; i < count-1; i++)
    {
        // spaces
        for (int j = 0; j < i+1; j++)
        {
            cout << " ";
        }

        cout << "*";
        
        if(i != count-2){
            // space
            for (int j = 0; j < 2*(count-i)-5; j++)
            {
                cout << " ";
            }
    
            cout << "*";
        }
        
        cout << endl;
    }
    
}