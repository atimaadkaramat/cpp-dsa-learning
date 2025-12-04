#include <iostream>
using namespace std;

int binaryToDec(int biNum){

    int ans = 0;
    int pow = 1;

    while(biNum > 0){

        int rem = biNum % 10;
        biNum /= 10;

        ans += (rem * pow);
        pow *= 2;
    }

    // Decimal number
    return ans;
    
}

int main(){

    int number;

    cout << "Enter the binary number: ";
    cin >> number;

    cout << "The decimal conversion for " << number << " is: " << binaryToDec(number);
    
}