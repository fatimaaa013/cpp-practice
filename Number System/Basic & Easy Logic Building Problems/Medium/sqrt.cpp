#include <iostream>
using namespace std;
int sqroot(int n)
{
    int i, val = 0;
    if (n < 0)
        return -1;
    if (n == 0)
        return 0;
    for (i = 1; i * i <= n; i++)
    {
        // if(i*i == n)
        //     return i;
        val = i;
    }
    return val; // OR return i-1;
}
int main()
{
    int n, sqr;
    cout << "Enter any number: ";
    cin >> n;
    sqr = sqroot(n);
    if (sqr == -1)
        cout << "Invalid";
    else
        cout << "Sqrt(" << n << ") = " << sqroot(n);
    return 0;
}