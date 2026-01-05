#include <iostream>
using namespace std;
int main()
{
    int i, j, n1, n2;
    cout << "How many elements for array 1 and array 2 ? ";
    cin >> n1 >> n2;
    ;
    int arr1[n1], arr2[n2], visited[n2] = {0}; // initialize visited to 0
    cout << "enter array 1 elements: ";
    for (i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "enter array 2 elements: ";
    for (i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    cout << "Interesection of these two arrays: ";
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j] && visited[j] == 0)
            {
                cout << arr2[j] << " ";
                visited[j] = 1;
                break; 
                // ✅ prevent using same arr1[i] with more than one match
                // cout << arr1[i] << " ";
            }
        }
    }
    return 0;
}