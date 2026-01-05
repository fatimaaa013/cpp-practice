#include <iostream>
using namespace std;
int sumOfSquares(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
        sum += i*i;
    return sum;
}
int main()
{
    int n;
    cout << "Enter range: ";
    cin >> n;
    cout << "Sum of squares from 1 to " << n << " = " << sumOfSquares(n);
    return 0;
}