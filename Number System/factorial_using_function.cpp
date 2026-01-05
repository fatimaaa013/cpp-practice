#include <iostream>
using namespace std;
int calcFact(int n)
{
    int i = 1, f = 1;
    if (n < 0)
        return -1;
    if (n == 0)
        return 1;
    while (i <= n)
    {
        f = f * i;
        i++;
    }
    return f;
}
int main()
{
    int num, fact;
    cout << "Enter any number: " << endl;
    cin >> num;
    fact = calcFact(num);
    if (fact == -1)
        cout << "Factorial of negative numbers doesn't exist!" << endl;
    else
        cout << "Factorial of " << num << " = " << fact << endl;
    return 0;
}