#include <iostream>  // Gives access to cin, cout
using namespace std; // So you can use cin, cout directly

int main()
{
    int a, b;

    cout << "Enter two numbers: \n"; // Ask user for input
    cin >> a >> b;                   // Take input in order: first into a, second into b
    if (b != 0)
    {
        cout << "Quotient = " << (a / b) << endl;  // int/int
        cout << "Remainder = " << (a % b) << endl; // Modulus (remainder)
    }
    else
    {
        cout << "Invalid input!" << endl;
    }
    return 0;
}
