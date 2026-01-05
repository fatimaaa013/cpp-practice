#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int vectorMin(vector<int> v)
{
    int min = INT_MAX; // +infinity
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < min)
            min = v[i];
    }
    return min;
}

int vectorMax(vector<int> v)
{
    int max = INT_MIN; // -infinity
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > max)
            max = v[i];
    }
    return max;
}

int main()
{
    vector<int> v;
    int n, el, i;
    cout << "How many elements? ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> el;
        v.push_back(el);
    }
    cout << "Min element is " << vectorMin(v) << endl;
    cout << "Max element is " << vectorMax(v);
    return 0;
}