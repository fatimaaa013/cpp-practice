#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> v, int n)
{
    int st = 0, end = v.size() - 1;

    while (st <= end) // dividing the search space every time
    {
        mid = (st + end) / 2; // calculate mid repeatedly
        /* 
        mid = st + (end - st)/2; -> optimization for INT_MAX to prevent OVERFLOW
        end - start -> comparable values subtracted and then / and st added -> can fit into int without OVERFLOW of range of int
        */

        if (n == v[mid])
            return mid;
        else if (n < v[mid])
            end = mid - 1; // 1st half
        else
            st = mid + 1; // 2nd half
    }
    return -1;
}
int main()
{
    int n, i, el, key;
    cout << "How many elements? ";
    cin >> n;
    vector<int> vec;
    for (i = 0; i < n; i++)
    {
        cin >> el;
        vec.push_back(el);
    }

    cout << "Which key? ";
    cin >> key;

    int pos = binarySearch(vec, key);
    if (pos == -1)
        cout << "Not found";
    else
        cout << "key " << key << " found at position " << pos + 1;
    return 0;
}