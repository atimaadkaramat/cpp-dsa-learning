#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec;

    cout << "size = " << vec.size() << endl;

    vec.push_back(10); // add element from the back
    vec.push_back(20);
    vec.push_back(30);

    cout << "size after push back = " << vec.size();


    return 0;
}