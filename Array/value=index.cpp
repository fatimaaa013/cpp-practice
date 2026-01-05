#include <iostream>
#include <vector>
using namespace std;
// indexing in vectors begins from 0 STRICTLY -> change the operations according to 1-based indexing 
vector<int> valueEqualToIndex(vector<int> &arr)
{
    vector<int> v2;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == i+1)
            v2.push_back(i+1);
    }
    return v2;
}
int main()
{
    int n, el, i;
    cout << "Enter vector size: ";
    cin >> n;
    vector<int> v;
    cout << "Enter vector elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> el;
        v.push_back(el);
    }
    vector<int> v1 = valueEqualToIndex(v);
    for (i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    return 0;
}