#include <iostream>
#include <deque>
using namespace std;

void display(deque<int>& deque){
    for (int val : deque)
    {
        cout << val << " " ;
    }
    cout << endl;
}

int main(){

    deque<int> d = {1,2,3}; // double ended queue

    d.push_back(4);
    d.push_front(0);

    display(d);

    d.pop_back();
    d.pop_front();
    
    display(d);

    // more functions : size, erase, clear, front, back, begin, end, rbegin, rend
    return 0;
}