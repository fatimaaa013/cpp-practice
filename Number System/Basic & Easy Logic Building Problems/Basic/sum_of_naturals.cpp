#include <iostream>
using namespace std;
int sumOfNaturals(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
        sum += i;
    return sum;
}
int main()
{
    int n;
    cout << "Enter range: ";
    cin >> n;
    cout << "Sum of numbers from 1 to " << n << " = " << sumOfNaturals(n);
    return 0;
}