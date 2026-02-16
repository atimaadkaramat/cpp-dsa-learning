#include <iostream>
#include <list>
using namespace std;

void display(list<int>& list){
    for (int val : list)
    {
        cout << val << " " ;
    }
    cout << endl;
}

int main(){

    list<int> l = {1,2,3}; // doubly linked list

    l.push_back(4);
    l.push_front(0);

    display(l);

    l.pop_back();
    l.pop_front();
    
    display(l);

    // more functions : size, erase, clear, front, back, begin, end, rbegin, rend
    return 0;
}