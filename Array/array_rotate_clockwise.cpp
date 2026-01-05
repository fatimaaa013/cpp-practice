#include <iostream>
using namespace std;
#include <vector>

vector<int> clockwiseRotateBy1(vector<int> &v)
// pass by reference when returning changed vector
{
    int end = v[v.size() - 1];
    for (int i = v.size() - 2; i >= 0; i--)
        v[i + 1] = v[i];
    v[0] = end;
    return v;
}
int main()
{
    int n, i, el;
    cout << "Enter vector size: ";
    cin >> n;
    vector<int> v;
    cout << "Enter vector elements: ";
    for (i = 0; i < n; i++) // initially v.size() = 0 since vector is empty so use i < n
    {
        cin >> el;
        v.push_back(el);
    }
    clockwiseRotateBy1(v);
    cout << "Rotated array is : ";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}