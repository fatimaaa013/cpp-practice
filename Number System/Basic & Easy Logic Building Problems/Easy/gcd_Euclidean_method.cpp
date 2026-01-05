#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    /*Example:
    (48, 18) -> 48 % 18 -> rem = 12 | a = 18, b = 12
    (18, 12) -> 18 % 12 -> rem = 6 | a = 12, b = 6
    (12, 6) -> 12 % 6 -> rem = 0 | a = 6, b = 0
    (6, 0) -> so GCD = 6 | GCD(0, n) || GCD(n, 0) = n
    */
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
int main()
{
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    cout << "Pair: (" << a << ", " << b << ")" << endl;
    if (a == 0 && b == 0)
        cout << "Invalid Input!";
    else
        cout << "GCD = " << gcd(a, b);
    return 0;
}