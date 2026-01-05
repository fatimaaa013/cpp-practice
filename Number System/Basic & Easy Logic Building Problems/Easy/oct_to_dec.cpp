#include <iostream>
using namespace std;
int octToDec(int n)
{
    int rem, dec = 0, x = 1;
    if (n < 0)
        return -1;
    while (n != 0)
    {
        rem = n % 10;
        if (rem >= 8)
            return -1;
        dec += rem * x;
        x *= 8;
        n = n / 10;
    }
    return dec;
}
int main()
{
    int n, res;
    cout << "Enter any octal number: ";
    cin >> n;
    res = octToDec(n);
    if (res == -1)
        cout << "Invalid";
    else
        cout << "Decimal of " << n << " = " << res;
    return 0;
}