#include <iostream>
using namespace std;

void fib(int count){

    int x = 0 , y = 1;

    for (int i = 0; i < count; i++)
    {
        cout << x << " " << y << " ";

        x += y;
        y += x;
    }
    
}

int main(){

    fib(10);    
}