#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a / gcd(a, b) * b);
}
int main()
{
    int a, b;
    cout << "Enter a & b: ";
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    if (a == 0 || b == 0)
        cout << "Undefined";
    else
        cout << "LCM of (" << a << ", " << b << ") is " << lcm(a, b);
    return 0;
}