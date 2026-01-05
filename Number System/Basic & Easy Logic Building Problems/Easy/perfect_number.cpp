#include <iostream>
using namespace std;

bool isPerfect(int n)
{
    int i, sum = 0;
    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (n / i != n && n / i != i)
                sum += n / i;
        }
    }
    return (sum == n);
}

int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    if (n <= 1)
        cout << "Not perfect";
    else
        isPerfect(n) ? cout << "Perfect" : cout << "Not Perfect";
    return 0;
}