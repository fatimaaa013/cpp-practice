#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a, b, c: " << endl;
    cin >> a >> b >> c;
    if (a == b || b == c || a == c)
        cout << "Input distinct values only!" << endl;
    else
    {
        if (a > b)
        {
            if (a > c)
                cout << a << " is largest" << endl;
            else
                cout << c << " is largest" << endl;
        }
        else if (b > c)
            cout << b << " is largest" << endl;
        else
            cout << c << " is largest" << endl;
    }
    return 0;
}

