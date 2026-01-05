#include <iostream>
using namespace std;

int aRaisedTob(int a, int b)
{
    int i, ans = 1;
    for (i = 1; i <= b; i++)
        ans *= a;
    return ans;
}
// int kthDigit(int n, int k)
// {
//     if (n >= 0 && n <= 9)
//         return n;
//     string num = to_string(n);
//     int i, len = num.length();
//     // for (int i = len-1; i>=0; i--)
//     // {
//     //     if (k == i+1)
//     //         return (num[(len - 1) - i] - '0');
//     // }
//     i = len - k; // kth digit from right is len-k
//     return (num[i] - '0');
// }

int kthDigit(int n, int k)
{
    int rev = 0, rem, i;
    if (n >= 0 && n <= 9)
        return n;
    while (n != 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    for (i = 1; i <= k - 1; i++)
    {
    }
}
int main()
{
    int a, b, k, aPowb;
    cout << "Enter a, b & k: ";
    cin >> a >> b >> k;
    aPowb = aRaisedTob(a, b);
    cout << aPowb << endl;
    cout << kthDigit(aPowb, k);
    return 0;
}