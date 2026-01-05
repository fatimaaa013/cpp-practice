#include <iostream>
using namespace std;
int pow(int a, int b)
{
    int i, ans = 1;
    for (i = 1; i <= b; i++)
        ans *= a;
    return ans;
}

int binToDec(int n)
{
    int c = 0, dec = 0, rem;
    if (n < 0)
        return -1;
    while (n != 0)
    {
        rem = n % 10;
        if (rem != 0 && rem != 1)
            return -1;
        n = n / 10;
        dec += (rem * pow(2, c));
        c++;
    }
    return dec;
}
int main()
{
    int n, res;
    cout << "Enter a binary number: ";
    cin >> n;
    res = binToDec(n);
    if (res == -1)
        cout << "Invalid";
    else
        cout << "Decimal of " << n << " = " << res;
    return 0;
}