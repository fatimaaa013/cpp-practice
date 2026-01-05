#include <iostream>
#include <string>
using namespace std;
int strToInt(string n)
{
    int ans = 0, len = n.length(), i, dig;
    for (i = 0; i < len; i++)
    {
        if (n[i] == '-')
            return -1;
        if (n[i] < '0' || n[i] > '9')
            return -1;
        dig = (n[i] - '0');
        ans = ans * 10 + dig;
    }
    return ans;
}
int main()
{
    string n;
    cout << "Enter any string: ";
    cin >> n;
    int res = strToInt(n);
    if (res == -1)
        cout << "Invalid";
    else
        cout << "Integer of " << "\"" << n << "\"" << " is " << strToInt(n);
    return 0;
}