#include <iostream>
using namespace std;
int lcm(int a, int b)
{
    int lcm = max(a, b);
    while (!(lcm % a == 0 && lcm % b == 0))
        lcm++;
    return lcm;
}
int main()
{
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    if (a == 0 || b == 0)
        cout << "Undefined";
    else
        cout << "LCM of " << "(" << a << ", " << b << ") = " << lcm(a, b);
    return 0;
}