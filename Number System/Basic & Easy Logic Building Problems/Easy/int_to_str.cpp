#include <iostream>
#include <string>
using namespace std;
string intToString(int n)
{
    string ans = "", rev = "";
    if (n < 0)
        return "-1";
    if (n == 0)
        return "0";
    while (n != 0)
    {
        int rem = n % 10;
        ans += (rem + '0'); // ASCII of '0' = 48 so 3 + 48 = 51 = '3' (char)
        n = n / 10;
    }
    for (int i = ans.length() - 1; i >= 0; i--)
        rev += ans[i];
    return rev;
}
int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    string res = intToString(n);
    if (res == "-1")
        cout << "Invalid";
    else
        cout << "String of " << n << " is " << "\"" << res << "\"";
    return 0;
}