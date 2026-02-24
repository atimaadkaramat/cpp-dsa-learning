#include <iostream>
using namespace std;

int main()
{

    pair<int, int> p = {1, 2};

    cout << p.first << endl; // 1
    cout << p.second << endl; // 2

    pair<string, int> p2 = {"atimaad", 2};

    cout << p2.first << endl; // atimaad
    cout << p2.second << endl; // 2

    return 0;
}