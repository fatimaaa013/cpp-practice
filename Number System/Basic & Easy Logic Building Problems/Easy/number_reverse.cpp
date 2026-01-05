#include <iostream>
using namespace std;
#include <cmath>
// 1
/*int reverse(int n)
{
    int rem, rev = 0;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}
*/

// 2 -> printing the reverse directly using recursion
void reverse(int n)
{
    if (n == 0)
        return;
    else
    {
        cout << n % 10;
        reverse(n / 10);
    }
}

int main()
{
    int num, rev = 0;
    cout << "Enter number: ";
    cin >> num;
    reverse(num);
    // cout << "Reverse of " << num << " is " << reverse(num);
    return 0;
}

// 3 -> returning the rev by adjusting 10's place using recursion