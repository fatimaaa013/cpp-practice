#include <iostream>
using namespace std;
int calcFact(int n)
{
    // No need of FOR loops at all in recursion
    if (n < 0)
        return -1;
    if (n == 0)
        return 1;
    else
        return n * calcFact(n - 1); // n! = n*(n-1)!

}
int main()
{
    int num, fact;
    cout << "Enter any number: " << endl;
    cin >> num;
    fact = calcFact(num);
    if (fact == -1)
        cout << "Positive number ONLY!" << endl;
    else
        cout << "Factorial of " << num << " = " << fact << endl;
}