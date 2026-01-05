#include <iostream>
using namespace std;

int repeatedSum(int n)
{
    int sum;
    while(n>9)
    {
        sum = 0;
        while (n > 0)
        {
            int rem = n % 10;
            sum += rem;
            n = n / 10;
        }
        n = sum;
    }
    return n;
}

int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;
    cout << repeatedSum(num);
    return 0;
}