#include <iostream>
using namespace std;
int nCr(int n, int r)
{
    long long result = 1;
    if (r == 0 || r == n) // nC0 = nCn = 1
        return 1;
    r = min(r, n - r); // symmetry rule where r > n-r
    for (int i = 0; i < r; i++)
        result = result * (n - i) / (i + 1);
    return result;
    // int num = 1, denom = 1;
    // for (i = n; i > (n - r); i--)
    //     numerator = numerator * i;
    // for (i = r; i >= 1; i--)
    //     denominator = denominator * i;
    // return (numerator / denominator);
}
int main()
{
    int n, r;
    cout << "Enter n & r: ";
    cin >> n >> r;
    if (n < 0 || r < 0 || r > n)
        cout << "Invalid";
    else
        cout << n << "C" << r << " = " << nCr(n, r);
}