#include <iostream>
#include <vector>
using namespace std;

int main(){

    // syntax:  vector<type> name; 

    // ----Method 1----
    vector<int> vec; // 0 (empty)

    //cout << vec[0]; // error bcs its empty

    // ----Method 2----
    vector<int> vec2 = {1,2,3}; //3

    cout << vec2[0] << endl;
    cout << vec2[1] << endl;
    cout << vec2[2] << endl;

    // ----Method 3----

    vector<int> vec3(3,0); // 3 = size , 0 = index value

    cout << vec3[0] << endl;
    cout << vec3[1] << endl;
    cout << vec3[2] << endl;

    return 0;
}