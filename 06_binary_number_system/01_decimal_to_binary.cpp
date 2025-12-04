#include <iostream>
using namespace std;

int decToBinary(int decNum){

    int ans = 0;
    int pow = 1;

    for (int i = 0; decNum > 0; i++)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }

    // Binary number
    return ans;
    
}

int main(){

    int number;

    cout << "Enter the decimal number: ";
    cin >> number;

    cout << "The binary conversion for " << number << " is: " << decToBinary(number);
    
}