#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    // base case
    if (b == 0)
        return a;
    // recursive case
    return gcd(b, a % b);
    // Example: (48,26) -> (26, 22) -> (22, 4) -> (4, 2) -> (2, 0) -> b == 0 -> gcd = 2
}
int main()
{
    int a, b;
    cout << "Enter a & b: ";
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    if (a == 0 && b == 0)
        cout << "Undefined GCD";
    else
        cout << "GCD of " << "(" << a << ", " << b << ") = " << gcd(a, b);
}