#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vec = {1,3,53,745,734,34};

    cout << binary_search(vec.begin(),vec.end(),53);

    return 0;
}