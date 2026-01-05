#include <iostream>
using namespace std;
int nPr(int n, int r)
{
    long long ans = 1;
    if (n < 0 || r < 0 || r > n)
        return -1;
    if (r == 0)
        return 1;
    // nP0 = 1
    // no symmetry like nCr
    for (int i = 0; i < r; i++)
        ans *= (n - i);

    return ans;
}
int main()
{
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;
    long long res = nPr(n, r);
    if (res == -1)
        cout << "Invalid";
    else
        cout << n << "P" << r << " = " << res;
    return 0;
}