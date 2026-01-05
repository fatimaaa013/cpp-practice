#include <iostream>
using namespace std;

// 1 -> check only non-trivial roots -> 2 to n-1
// (1 & n are trivial roots of any n)
/*bool isPrime(int n)
{
    // edge cases - -ve & 1
    if(n<=1)
        return false;
    // check for non-trivial roots from 2 -> n-1
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
*/

// 2 -> checking only from 2 to √n
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    isPrime(n) ? cout << "Prime" : cout << "Not Prime";
    return 0;
}