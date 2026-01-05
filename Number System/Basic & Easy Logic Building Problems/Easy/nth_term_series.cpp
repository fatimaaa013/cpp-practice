#include <iostream>
using namespace std;
// approach - 1 using loop
// void generateSeries(int n)
// int nthTerm(int n)
// {
//     int tn = 0, i;
//     if (n <= 0)
//         return -1;
//     for (i = 1; i <= n; i++)
//     {
//         tn += i; // tn = tn-1 + i -> t3 = t2 + (i=3) ->
//         // cout << tn << " ";
//     }
//     return tn;
// }

// approach 2 - using recursion
int nthTerm(int n)
{
    if (n <= 0)
        return -1;
    else if (n == 1)
        return 1;
    else
        return n + nthTerm(n - 1);
}
// approach 3 - using formula for sum of 1st n natural numbers
// sum = n / 2 * (n+1) OR n * (n+1) / 2
// int nthTerm(int n)
// {
//     if (n <= 0)
//         return -1;
//     else
//         return n * (n + 1) / 2;
// }
int main()
{
    int n;
    // cout << "Enter number of terms: ";
    cout << "Enter the term to calculate: ";
    cin >> n;
    // int res = generateSeries(n);
    int res = nthTerm(n);
    if (res == -1)
        cout << "Invalid";
    else
        cout << n << "th term = " << res;
    return 0;
}