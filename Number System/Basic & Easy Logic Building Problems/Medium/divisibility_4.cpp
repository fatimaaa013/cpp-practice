#include <iostream>
#include <string>
using namespace std;

// bool divisibleBy4(int n)
// {
//     return (n%4==0);
// }
bool divisibleBy4(string n)
{
    int len = n.length(), sum = 0;
    if (len == 0)
        return false;
    if (len == 1)
        return (stoi(n) % 4 == 0);
    int last_digit = n[len - 1] - '0';
    int second_last_digit = n[len - 2] - '0';
    sum += 10 * second_last_digit + last_digit;

    return (sum % 4 == 0);
}
int main()
{
    string n;
    cout << "Enter any number: ";
    cin >> n;
    divisibleBy4(n) ? cout << "Divisible" : cout << "Not divisible";
}