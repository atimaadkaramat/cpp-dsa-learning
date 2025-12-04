#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;

    // Example 1: Parentheses override precedence
    e = (a + b) * c / d; // (30 * 15) / 5 = 90
    cout << "Value of (a + b) * c / d is: " << e << endl;

    // Example 2: Explicit grouping with parentheses
    e = ((a + b) * c) / d; // (30 * 15) / 5 = 90
    cout << "Value of ((a + b) * c) / d is: " << e << endl;

    // Example 3: Division happens before multiplication due to left-to-right associativity
    e = (a + b) * (c / d); // 30 * (15 / 5) = 30 * 3 = 90
    cout << "Value of (a + b) * (c / d) is: " << e << endl;

    // Example 4: Multiplication and division have higher precedence than addition
    e = a + (b * c) / d; // 20 + (150 / 5) = 20 + 30 = 50
    cout << "Value of a + (b * c) / d is: " << e << endl;

    // Example 5: Ternary conditional (right-to-left associativity)
    e = (a > b) ? (c * d) : (c / d); // 20 > 10 is true, so (15 * 5) = 75
    cout << "Value of (a > b) ? (c * d) : (c / d) is: " << e << endl;

    // Example 6: Assignment has right-to-left associativity
    int x = 1, y = 2, z = 3;
    x = y = z; // z is assigned to y, then y is assigned to x
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    // Example 7: Comma operator (left-to-right evaluation)
    int result = (x++, y++, z++, x + y + z); // All increments happen, then sum
    cout << "After comma: x = " << x << ", y = " << y << ", z = " << z << ", result = " << result << endl;

    return 0;
}