#include <iostream>
using namespace std;

int addDigits(int num){

    int sum = 0;

    for (int i = 0; num > 0; i++)
    {
        int lastDigit = num % 10;
        num /= 10;

        sum += lastDigit;
    }

    return sum;
}

int main()
{
    int x;

    cout << "Enter number: ";
    cin >> x;

    cout << "The sum of digits is: " << addDigits(x);

    return 0;
}