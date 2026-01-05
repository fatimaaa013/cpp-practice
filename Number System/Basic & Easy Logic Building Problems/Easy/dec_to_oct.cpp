#include <iostream>
using namespace std;

int decToOct(int n)
{
    int rem, x = 1, oct = 0;
    if (n < 0)
        return -1;
    while (n != 0)
    {
        rem = n % 8;
        oct += rem * x;
        x *= 10;
        n = n / 8;
    }
    return oct;
}
int main()
{
    int n, res;
    cout << "Enter any number: ";
    cin >> n;
    res = decToOct(n);
    if (res == -1)
        cout << "Invalid";
    else
        cout << "Octal of " << n << " = " << res;
    return 0;
}