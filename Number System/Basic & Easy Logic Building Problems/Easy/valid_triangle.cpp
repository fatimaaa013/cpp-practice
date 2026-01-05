#include <iostream>
using namespace std;
bool validTriangle(int a, int b, int c)
{
    return (a + b > c && b + c > a && a + c > b);
    // checks all conditions and exits even if one condition is false

    // (a+b<=c || b+c<=a || a+c<=b) -> checks for failure of any condition and returns false
} 

int main()
{
    int a, b, c;
    cout << "Enter sides: ";
    cin >> a >> b >> c;
    validTriangle(a, b, c) ? cout << "Valid" : cout << "Invalid";
    return 0;
}