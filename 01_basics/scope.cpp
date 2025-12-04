#include <iostream>
using namespace std;

int x = 10; // global scope

void fun(){
    int y = 5; // local scope
    cout << y << endl;  
    cout << x << endl;  
}

int main() {
  
    fun();

    cout << y << endl; // Error: y is unknown to main function due to local scope


    return 0; 
}   