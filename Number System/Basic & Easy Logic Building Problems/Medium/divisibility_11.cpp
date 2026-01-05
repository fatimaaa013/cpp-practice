#include <iostream>
#include <string>
using namespace std;

// bool divisibleBy11(int n)
// {
//     return (n%11==0);
// }
bool divisibleBy11(string n)
{
    int len = n.length(), i, odd_sum = 0, even_sum = 0;
    if (len == 0)
        return false;
    if (len == 1)
        return (stoi(n) % 11 == 0);
    for (i = 0; i < len; i++)
    {
        if (i % 2 == 0)
            even_sum += n[i] - '0';
        else
            odd_sum += n[i] - '0';
    }
    return ((odd_sum - even_sum) % 11 == 0);
}
int main()
{
    string n;
    cout << "Enter any number: ";
    cin >> n;
    divisibleBy11(n) ? cout << "Divisible" : cout << "Not divisible";
}