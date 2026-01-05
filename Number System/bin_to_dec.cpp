#include <iostream>
using namespace std;
int binToDec(int binNum)
{
    int decNum = 0, rem, pow = 1; // 2^0 -> 2^1 -> 2^2...
    while (binNum > 0)
    {
        rem = binNum % 10;
        decNum += rem * pow;
        binNum /= 10;
        pow *= 2;
    }
    return decNum; // decimal form
}
int main()
{
    cout << binToDec(101010);
    return 0;
}