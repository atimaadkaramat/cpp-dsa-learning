#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& vec){
    for(int val : vec) {
        cout << val << " ";
    }

    cout << endl;

    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;
}

int main(){

    vector<int> vec1;

    vector<int> vec2 = {1,2};
    
    vector<int> vec3(3,10);

    vector<int> vec4(vec2); // copy of vec2

    display(vec1);
    display(vec2);
    display(vec3);
    display(vec4);


    return 0;
}