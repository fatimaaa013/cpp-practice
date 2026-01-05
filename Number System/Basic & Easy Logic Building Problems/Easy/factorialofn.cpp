#include <iostream>
using namespace std;

// 1 - iteration method
/*
int fact(int n)
{
    int i, fact = 1;
    if (n == 0)
        return 1;
    else if (n < 0)
        return -1;
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact *= i;
        }
        return fact;
    }
}
*/

// 2 - recursive method
int fact(int n)
{
    // int fact = 1; -> not needed
    if (n == 0)
        return 1;
    else if (n < 0)
        return -1;
    else
        return (n * fact(n - 1));
}
int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    int f = fact(n);
    if (f == -1)
        cout << "Invalid input";
    else
        cout << "Factorial of " << n << " = " << fact(n);
    return 0;
}