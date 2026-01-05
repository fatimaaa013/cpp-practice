#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
int nCr(int n, int r)
{
    int f_n = fact(n);
    int f_r = fact(r);
    int f_nmr = fact(n - r);
    int nCr = f_n / (f_r * f_nmr);
    return nCr;
}
int main()
{
    int n, r;
    cout << "Enter any n & r : ";
    cin >> n >> r;
    cout << n << "C" << r << " = " << nCr(n, r);
    return 0;
}