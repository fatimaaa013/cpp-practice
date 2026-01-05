#include <iostream>
#include <climits>
using namespace std;

int minArr(int a[], int n)
{
    int min = INT_MAX, index, i;
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            index = i;
        }
    }
    cout << "Min = " << min << endl;
    return index;
}
int maxArr(int a[], int n)
{
    int max = INT_MIN, index, i;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            index = i;
        }
    }
    cout << "Max = " << max << endl;
    return index;
}
int main()
{
    int n;
    cout << "enter size: ";
    cin >> n;
    int arr[n];
    cout << "enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "given array is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int minIndex = minArr(arr, n);
    int maxIndex = maxArr(arr, n);

    swap(arr[minIndex], arr[maxIndex]);

    cout << "After swapping, array is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}