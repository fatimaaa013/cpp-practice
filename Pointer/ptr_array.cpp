#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int arr[n], *ptr = arr; // ptr points to the address of arr[0] -> ptr = &a[0]
    cout << "Enter array elements: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }
    cout << "Printing array elements: " << endl;
    for (i = 0; i < n; i++)
        cout << ptr[i] << endl;
    return 0;
}