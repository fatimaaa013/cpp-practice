#include <iostream>
using namespace std;
// approach 1 - counting factors
// int threeDivisors(int n)
// {
//     int i, div, c = 0;
//     if (n == 0)
//         return -1;
//     for (i = 1; i <= n; i++)
//     {
//         div = 0;
//         for (int j = 1; j <= i; j++)
//         {
//             if (i % j == 0)
//                 div++;
//         }
//         if (div == 3)
//             c++;
//     }
//     return c;
// }
bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
// approach 2 - only square of prime numbers have exactly 3 factors
// eg: 9 = 1, 3, 9
int threeDivisors(int n)
{
    int i, c = 0;
    for (i = 1; i * i <= n; i++)
    // check if the square of i is in range of n
    // check if i is prime -> if true then i*i will have 3 factors
    {
        if (isPrime(i))
            c++;
    }
    return c;
}
int main()
{
    int n, i, el, res;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << threeDivisors(n);
    return 0;
}