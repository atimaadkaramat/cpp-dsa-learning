#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<pair<int, int>> vec = {{1,2}, {3,4}};

    vec.emplace_back(5,6); // in-place object create and insert
    vec.push_back({7,8}); // insert

    for(auto p : vec){

        cout << p.first << "," << p.second << endl;
    }


    return 0;
}