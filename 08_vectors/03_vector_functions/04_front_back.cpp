#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<char> vec = {'a','b','c','d','e'};

    cout << "element in front = " << vec.front() << endl;
    cout << "element in back = " << vec.back() << endl;

    for(char value : vec) // for each loop
    {
        cout << value << endl;
    }

    return 0;
}