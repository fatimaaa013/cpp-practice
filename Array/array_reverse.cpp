#include <iostream>
using namespace std;

// 2 pointer approach
void reverseArr(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end) // start == end for odd size
                         // start < = end for even size
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int n = 7;

    cout << "Original array is : " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Reversed array is : " << endl;
    reverseArr(arr, 7);
    return 0;
}