#include <iostream>
#include <vector>
using namespace std;

// 2 pointer approach
vector<int> reverseVector(vector<int> &v) // function return type -> vector
{
    int st = 0, end = v.size() - 1;
    while (st <= end)
    {
        swap(v[st], v[end]);
        st++;
        end--;
    }
    return v;
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
    // vector<int> rev = reverseVector(vec);
    // for (int i : rev)
    //     cout << i << " ";
    reverseVector(vec);
    for (int i : vec)
        cout << i << " ";
    return 0;
}

/*/void reverseVector(vector<int> v)
{
    for (int i = v.(size)-1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
}
*/

/*
vector<int> reverseVector(vector<int> &v)
{
    vector<int> rev;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        rev.push_back(v[i]);
    }
    return rev;
}
*/

/* int main()
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
    reverseVector(vec);
    for(int i : vec)
        cout << i << " ";
    return 0;
}
*/