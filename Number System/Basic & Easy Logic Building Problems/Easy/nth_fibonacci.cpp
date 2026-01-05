#include <iostream>
using namespace std;

int nthFib(int n) // 0 based indexing
{
    if (n < 0)
        return -1;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int a = 0, b = 1, next;
    while (n >= 2)
    {
        next = a + b;
        a = b;
        b = next;
        n--;
    }
    return next;
}
int main()
{
    int n, ans;
    cout << "Enter the term you want to find: ";
    cin >> n;
    ans = nthFib(n);
    if (ans == -1)
        cout << "Enter positive value!";
    else
        cout << ans;
    return 0;
}