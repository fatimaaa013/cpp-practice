#include <iostream>
using namespace std;
int main()
{
    int n, unique[] = {0}, i, j;
    cout << "How many elements? ";
    cin >> n;
    int arr[n];
    cout << "enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        bool found = false;
        for (j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                found = true;
                break;
            }
        }
        if (found == false)
            cout << arr[i] << " ";
    }
    return 0;
}