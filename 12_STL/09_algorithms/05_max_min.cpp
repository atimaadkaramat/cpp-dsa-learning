#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    vector<int> vec = {1,2,37,8,4,6};

    cout << "max = " << max(1,5) << endl;
    cout << "min = " << min(1,5) << endl;

    cout << *max_element(vec.begin(), vec.end()) << endl;


    return 0;
}