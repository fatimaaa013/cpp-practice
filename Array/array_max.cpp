#include <iostream>
using namespace std;
int main()
{
    int max, i, n;
    cout << "Enter number of array elements: " << endl;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i]; // no endl with cin ❌
    }
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    cout << "Max element in array is " << max;
    return 0;
}