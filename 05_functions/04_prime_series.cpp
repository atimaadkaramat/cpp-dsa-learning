#include <iostream>
using namespace std;

// Function Prototype
bool isPrime(int num);
void printPrime(int count);

int main(){

    printPrime(10);

    return 0;
}


bool isPrime(int num)
{
    if (num <= 1) return false;
    if (num <= 3) return true;

    // Eliminate multiples of 2 and 3
    if (num % 2 == 0 || num % 3 == 0) return false;

    // Check only numbers of form 6k +- 1
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

void printPrime(int count){
    
    for (int i = 0; i < count; i++)
    {
        if(isPrime(i)){

            cout << i << " ";
        }
    }
    
}