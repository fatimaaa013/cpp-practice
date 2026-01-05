#include <iostream>
using namespace std;
int nth_Fibonacci(int n)
{
    int a = 0, b = 1, next = 0;
    if (n == 0)
        return a;
    else if (n == 1)
        return b;
    else
    {
        for (int i = 1; i <= n - 2; i++) // i = 3 <= n || i = 1 <= n-2
        {
            next = a + b;
            a = b;
            b = next;
        }
        return next;
    }
}
int main()
{
    int n;
    cout << "Enter fibonacci term : ";
    cin >> n;
    if (n < 0)
        cout << "Error!";
    else
        cout << n << " fibonacci term is " << nth_Fibonacci(n);
    return 0;
}