#include <iostream>
using namespace std;

void changeA(int &b){ // alias (b = a)
     
    b = 20;
}

int main(){
    int a = 10;

    changeA(a);
    cout << "inside main fxn: " << a;

    return 0;
}