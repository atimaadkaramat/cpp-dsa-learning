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

    vector<int> vec = {1,2,3,4,5,6,7,8,9};

    display(vec);
    
    // erase()
    vec.erase(vec.begin()); // capacity will not be effected
    
    display(vec);

    vec.erase(vec.begin() + 2, vec.begin() + 5);  // [start , end)

    display(vec);
    
    // insert()
    vec.insert(vec.begin() + 2, 100);
    
    display(vec);

    // clear()
    vec.clear();

    display(vec);

    // empty()

    cout<< "Is your vector empty = " << vec.empty();

    return 0;
}