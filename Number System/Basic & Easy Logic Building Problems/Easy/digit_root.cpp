#include <iostream>
using namespace std;

int digitRoot(int n)
{
    int rem, sum;
    if (n < 0)
        return -1;
    while (n >= 10) // run till the number contains > 1 digit
    {
        sum = 0; // re initialize sum to calculate for new n
        while (n != 0)
        {
            rem = n % 10;
            sum += rem;
            n = n / 10;
        }
        n = sum; // assign new value to n
    }
    return n; // if number is btw 0-9 return n directly
}
int main()
{
    int n, res;
    cout << "Enter any number: ";
    cin >> n;
    res = digitRoot(n);
    if (res == -1)
        cout << "Invalid";
    else
        cout << res;
    return 0;
}