#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& vec){
    for(int val : vec) {
        cout << val << " ";
    }

    cout << endl;

}

int main(){

    vector<int> vec = {1,2,3,4,5};

    cout << "vector.begin() = " << *(vec.begin()) << endl;
    cout << "vector.end() = " << *(vec.end()) << endl; // garbage value

    vector<int>::iterator it;

    for(it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    vector<int>::reverse_iterator it2;

    for(it2 = vec.rbegin(); it2 != vec.rend(); it2++){
        cout << *(it2) << " ";
    }

    return 0;
}