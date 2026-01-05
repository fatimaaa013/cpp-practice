#include <iostream>
#include <vector>
using namespace std;

void removeOccurences(vector<int> v1, int n)
{
    vector<int> v2;
    for (int i = 0; i < v1.size(); i++)
    {
        if(v1[i] == n)
            continue;
        else
            v2.push_back(v1[i]);
    }
    for (int i : v2)
        cout << i << " ";
}
int main()
{
    int n, i, el, num;
    cout << "How many elements? ";
    cin >> n;
    vector<int> v;
    for (i = 0; i < n; i++)
    {
        cin >> el;
        v.push_back(el);
    }
    cout << "Which element to remove? ";
    cin >> num;
    removeOccurences(v, num);
    return 0;
}