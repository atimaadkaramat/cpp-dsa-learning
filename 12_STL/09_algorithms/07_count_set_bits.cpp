#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n = 15;
    long int x = 15;
    long long int y = 15;

    cout << __builtin_popcount(n) << endl;
    cout << __builtin_popcountl(x) << endl;
    cout << __builtin_popcountll(y) << endl;
}