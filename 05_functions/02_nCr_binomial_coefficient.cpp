#include <iostream>
using namespace std;

int factorial(int x)
{
    int fact = 1;

    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }

    return fact;
}

int nCr(int n, int r)
{

    int fact_n = factorial(n);
    int fact_r = factorial(r);

    // factorial of n - r
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main()
{

    int n, r;

    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter value of r: ";
    cin >> r;

    if (r > n)
    {
        cout << "Invalid input: r cannot be greater than n.\n";
    }
    else
    {
        cout << "The nCr is: " << nCr(n, r) << '\n';
    }

    return 0;
}