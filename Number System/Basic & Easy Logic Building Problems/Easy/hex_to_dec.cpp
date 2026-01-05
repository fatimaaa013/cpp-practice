#include <iostream>
#include <string>
using namespace std;
int hexToDec(string n)
{
    int dec = 0, dig, x = 1;

    for (int i = n.length() - 1; i >= 0; i--)
    {
        if (!(n[i] >= '0' && n[i] <= '9') && !(n[i] >= 'A' && n[i] <= 'F'))
            return -1;
        if (n[i] >= '0' && n[i] <= '9')
        {
            dig = n[i] - '0';
            dec = dec + dig * x;
            x = x * 16;
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            dig = n[i] - 'A' + 10;
            dec = dec + dig * x;
            x = x * 16;
        }
    }
    return dec;
}
int main()
{
    string n;
    cout << "Enter any hexadecimal number: ";
    cin >> n;
    int res = hexToDec(n);
    if (res == -1)
        cout << "Invalid";
    else
        cout << "Decimal of " << n << " = " << res;
    return 0;
}