#include <iostream>
using namespace std;
int power(int a, int b)
{
    int i, ans = 1;
    for (i = 1; i <= b; i++)
        ans *= a;
    return ans;
}

int decToBin(int n)
{
    int c = 0, bin = 0, rem;
    if (n < 0)
        return -1;
    while (n != 0)
    {
        rem = n % 2;
        c++;
        n = n / 2;
        bin = bin + (rem * power(10, c - 1));
    }
    return bin;
}
int main()
{
    int n, res;
    cout << "Enter any number: ";
    cin >> n;
    res = decToBin(n);
    if (res == -1)
        cout << "Invalid";
    else
        cout << "Binary of " << n << " = " << decToBin(n);
    return 0;
}