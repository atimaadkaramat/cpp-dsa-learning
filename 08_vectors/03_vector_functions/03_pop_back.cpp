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

    cout << "size after push back = " << vec.size() << endl;

    vec.pop_back(); // removes element from the back

    cout << "size after pop back = " << vec.size() << endl;

    for(int value : vec) // for each loop
    {
        cout << value << endl;
    }

    return 0;
}