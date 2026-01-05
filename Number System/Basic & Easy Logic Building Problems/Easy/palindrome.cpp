#include <iostream>
using namespace std;
bool isPalindrome(int n)
{
    int rev = 0, copy = n, rem;
    if (n < 0)
        return false;
    while (n != 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    return (rev == copy);
}
int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    isPalindrome(n) ? cout << "Palindrome" : cout << "Not Palindrome";
    return 0;
}