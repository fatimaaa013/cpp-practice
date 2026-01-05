#include <iostream>
using namespace std;

/*approach 1 - using remainder and dividing the number repeatedly
int sumOfDigits(int n)
{
    int s = 0, rem;
    n = abs(n); // this makes the number positive
    while (n != 0)
    {
        rem = n % 10;
        s += rem;
        n = n / 10;
    }
    return s;
}
*/

// approach 2 - using recursion
// base case: return 0 if n=0
// recursive case: else return (num%10) + sumOfDigits(num/10)
int sumOfDigits(int n)
{
    if (n == 0)
        return 0; // base case
    else
        return (n % 10) + sumOfDigits(n / 10);
}
int main()
{
    int num, copy;
    cout << "Enter any number: ";
    cin >> num;
    copy = num;
    cout << "Sum of digits " << " = " << sumOfDigits(num);
    return 0;
}