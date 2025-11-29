#include <iostream> 
using namespace std;

int main(){ 

    int a = 10; 
    int b = 20;

    // Arithmetic Operators
    
    cout << (a + b) << endl; // 30 
    cout << (a - b) << endl; // -10
    cout << (a * b) << endl; // 200
    cout << (a / b) << endl; // 0.5
    cout << (a % b) << endl; // 10

    // Relational Operators
    cout << (a + b == 31) << endl; // 0 False
    cout << (a - b < 0) << endl; // 1 True
    cout << (a * b > 300) << endl; // 0
    cout << (a / b != 0) << endl; // 0

    
    // Logical Operators
    bool Coffe = true;
    bool Tea = false;

    // AND Gate
    cout << (Coffe && Tea) << endl;

    // OR Gate
    cout << (Coffe || Tea) << endl;

    // NOT Gate
    cout << (Coffe &&  !Tea) << endl; // (not Tea) = True

    return 0;
}