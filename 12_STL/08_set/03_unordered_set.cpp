#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main(){
    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    
    s.insert(5);

    s.insert(1);
    s.insert(2);
    s.insert(3);

    cout << "size = " <<s.size() << endl;
    
    for(auto val: s){
        cout << val << " ";
    }
    cout << endl;


    return 0;
}