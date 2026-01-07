#include <iostream>
using namespace std;

void changeA(int* ptr){ //pointer
     
    *ptr = 20;
}

int main(){
    int a = 10;

    changeA(&a);
    cout << "inside main fxn: " << a;

    return 0;
}