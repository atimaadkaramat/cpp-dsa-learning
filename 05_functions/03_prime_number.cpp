#include <iostream>
using namespace std;

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

int main(){

    cout << isPrime(232);

    return 0;
}
