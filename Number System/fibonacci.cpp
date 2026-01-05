#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, i = 1, n, temp;
    cout << "Enter number of terms: " << endl;
    cin >> n;
    if (n == 1)
        cout << a << endl;
    else if (n >= 2)
    {
        cout << a << " " << b << " ";
        while (i <= n - 2)
        {
            temp = a + b;
            cout << temp << " ";
            a = b;
            b = temp;
            i++;
        }
    }
    else
        cout << "Invalid Input!" << endl;
    return 0;
}