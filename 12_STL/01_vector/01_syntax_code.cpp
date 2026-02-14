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

    // vector<int> vec;
    vector<int> vec = {1,2};
    
    vec.push_back(3);
    
    display(vec);

    vec.pop_back();

    display(vec);

    cout << "val at index 2 = " << vec[2]  << endl;

    cout << "value at front = " << vec.front() << endl;
    cout << "value at back = " << vec.back() << endl;



    return 0;
}