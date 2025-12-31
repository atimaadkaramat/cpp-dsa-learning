#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec = {1, 2}; // 2

    cout << "size = " << vec.size() << endl;         // 2
    cout << "capacity = " << vec.capacity() << endl; // 2

    cout << "vector = ";
    for (int value : vec) // for each loop
    {
        cout << value << " ";
    }
    cout << endl
         << endl;

    vec.push_back(3); // As the vector is full the capacity will be doubled

    cout << "size after push back = " << vec.size() << endl;         // 3
    cout << "capacity after push back = " << vec.capacity() << endl; // 4

    cout << "vector = ";
    for (int value : vec) // for each loop
    {
        cout << value << " ";
    }
    cout << endl
         << endl;

    return 0;
}