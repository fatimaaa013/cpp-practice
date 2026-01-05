#include <iostream>
using namespace std;

bool isEven(int n)
{
    int rem = n % 2;
    if (rem == 0)
        return true;
    else
        return false;
}
int main()
{
    int num;
    cout << "Enter number of you choice: \n";
    cin >> num;
    if (isEven(num))
        cout << "True - EVEN";
    else
        cout << "False - ODD";
    return 0;
}

// The last bit of all odd numbers is always 1, while for even numbers it’s 0. So, when performing bitwise AND operation with 1, odd numbers give 1, and even numbers give 0.