#include <iostream>
#include <cmath>
using namespace std;

bool isPower(int x, int y)
{
    if (x <= 0 || y <= 0) // ✅ Handles invalid inputs: log(0), log(-ve) not defined
        return false;
    if (x == 1) // for x=1, 1^anything = 1 -> true only for y = 1
                // ✅ 1^y = 1 for any y, only y==1 is true
        return y == 1;
    if (y == 1) //  ✅ x^0 = 1 for any x>0
        return true;

    // using x^b = y -> b = log(y)/log(x) to check if b is an integer
    double pow = log(y) / log(x);

    // using epsilon to remove float inaccuries like 2.999999 or 3.00000001
    return (abs(pow - round(pow)) < 1e-9);
}

// 2 -> multiplying x repeatedly till y is reached
/*bool isPower(int x, int y)
{
    int pow = 1;
    if (x <= 0 || y <= 0)
        return false;
    if (x == 1)
        return y == 1;
    if (y == 1)
        return true;
    while (pow <= y)
    {
        if ((pow *= x) == y)
            return true;
    }
    return false;
}*/
int main()
{
    int x, y;
    cout << "Enter x and y: ";
    cin >> x >> y;
    isPower(x, y) ? cout << "True" : cout << "False";
    return 0;
}