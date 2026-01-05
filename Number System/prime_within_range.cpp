// print prime numbers from 2 to 'n'
#include <iostream>
using namespace std;
void primeWithinRange(int n)
{
    int count = 0, i, j;
    for (i = 1; i <= n; i++)
    {
        count = 0; // reset count every time for new number
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
            cout << i << " ";
    }
}
int main()
{
    int n;
    cout << "Enter range : ";
    cin >> n;
    primeWithinRange(n);
    return 0;
}