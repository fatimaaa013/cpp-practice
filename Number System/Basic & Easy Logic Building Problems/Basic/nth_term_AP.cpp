#include <iostream>
using namespace std;

/* approach 1 - using nth term formula
 nth term of AP tn = (a+(n-1)d)
*/
int nthTermOfAP(int a1, int a2, int tn)
{
    int d = a2 - a1;
    tn = a1 + (tn - 1) * d;
    return tn;
}

// 2nd approach - for loop to iterate over the series -> add 'd' each time to 'a1' (n-1) times to reach nth term
// int nthTermOfAP(int a1, int a2, int tn)
// {
//     int n = a1, d = a2 - a1;
//     for (int i = 1; i < tn; i++)
//     {
//         n += d; // adding d (n-1) times to get the nth term -> better than calculating multiple times
//     }
//     return n;
// }

int main()
{
    int n, a1, a2;
    cout << "Enter 1st term, 2nd term and n: " << endl;
    cin >> a1 >> a2 >> n;

    cout << "t" << n << " = " << nthTermOfAP(a1, a2, n);
    return 0;
}