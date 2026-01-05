#include <iostream>
using namespace std;
void swap(int &n, int &m) // pass by reference to directly reflect in main()
{
    // n = n + m;
    // m = n - m;
    // n = n - m;
    int temp = n;
    n = m;
    m = temp;
}
int main()
{
    int a, b;
    cout << "Enter values to swap: ";
    cin >> a >> b;
    cout << "before swapping, a = " << a << " & b = " << b;
    swap(a, b);
    cout << "after swapping, a = " << a << " & b = " << b;
    return 0;
}