#include <iostream>
#include <vector>
using namespace std;

int vectorSum(vector<int> v)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
        sum += v[i];
    return sum;
}

int main()
{
    int n, i, el;
    cout << "How many elements? ";
    cin >> n;
    vector<int> vec;
    for (i = 0; i < n; i++)
    {
        cin >> el;
        vec.push_back(el);
    }
    cout << "Sum of vector is " << vectorSum(vec);
    return 0;
}