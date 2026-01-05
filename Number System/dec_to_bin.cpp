#include <iostream>
using namespace std;
int decToBin(int decNum)
{
    int binNum = 0, rem, pow = 1; // 10^0 -> 10^1 -> 10^2...
    while (decNum != 0)
    {
        rem = decNum % 2;
        binNum += (rem * pow);
        decNum = decNum / 2;
        pow *= 10;
    }
    return binNum; // binary form
}
int main()
{
    for (int i = 1; i <= 10; i++)
        cout << i << " : " << decToBin(i) << endl;
    return 0;
}