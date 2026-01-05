#include <iostream>
using namespace std;
// 0-based indexing
void fib(int n)
{
    int next, a = 0, b = 1;
    if (n == 0)
    {
        cout << a;
        return;
    }
    if (n == 1)
    {
        cout << b;
        return;
    }
    if (n < 0)
    {
        cout << "Invalid";
        return;
    }
    cout << a << " " << b << " ";
    while (n >= 2)
    {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
        n--;
    }
}
int main()
{
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    fib(n);
    return 0;
}