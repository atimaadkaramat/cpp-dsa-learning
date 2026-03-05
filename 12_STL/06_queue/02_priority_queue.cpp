#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {

    priority_queue<int> q;

    q.push(5);
    q.push(4);
    q.push(3);
    q.push(10);
  

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
    
    priority_queue<int, vector<int>, greater<int>> q2; // functor (function object)

    q2.push(5);
    q2.push(4);
    q2.push(3);
    q2.push(10);

    while (!q2.empty())
    {
        cout << q2.top() << " ";
        q2.pop();
    }

    return 0;
}

// funtions 

// push,emplace  O(logn)
// top O(1)
// pop  O(logn)
// size
// empty