#include <iostream>
using namespace std;
int powerOf(int a, int b)
{
    int i = 1, ans = 1;
    while (i <= b)
    {
        ans *= a;
        i++;
    }
    return ans;
}
int countDigits(int n)
{
    int c = 0;
    if (n == 0)
        return 1;
    while (n != 0)
    {
        c++;
        n = n / 10;
    }
    return c;
}
bool isArmstrong(int n)
{
    int copy = n, rem, sum = 0, dig = countDigits(n);
    if (n < 0)
        return false;
    while (n != 0)
    {
        rem = n % 10;
        sum += powerOf(rem, dig);
        n = n / 10;
    }
    return (sum == copy);
}
int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    isArmstrong(n) ? cout << "Armstrong number" : cout << "Not Armstrong";
    return 0;
}