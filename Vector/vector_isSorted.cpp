#include <iostream>
#include <vector>
using namespace std;
int isSorted(vector<int> v)
{
    for (int i = 0; i < v.size() - 1; i++)
    // size - 1 -> v[i+1] for last index will go out of bounds
    {
        if (v[i] > v[i + 1])
            return -1;
    }
    return 1;
}
int main()
{
    int n, i, el;
    vector<int> vec;
    cout << "How many elements in vector? ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> el;
        vec.push_back(el);
    }

    int sorted = isSorted(vec);
    if (sorted == -1)
        cout << "Not Sorted";
    else
        cout << "Sorted in ascending order";
    return 0;
}