#include <iostream>
using namespace std;

int main()
{

    pair<string, pair<int, int>> p = {"atimaad", {1, 2}};

    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;


    return 0;
}