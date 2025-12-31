#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<char> vec = {'a','b','c','d','e'};

    cout << vec.at(0) << endl; // same as vec[0]
    cout << vec.at(3) << endl;

    return 0;
}