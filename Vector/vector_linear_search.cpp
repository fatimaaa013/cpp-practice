#include <iostream>
#include <vector>
using namespace std;
int linearSearch(vector<int> &v, int num)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == num)
        {
            return i + 1; // key found
            // return immediately exits the entire function -> break not needed
        }
    }
    return -1; // key not found
}
int main()
{
    int n, i, el, key;
    vector<int> vec;
    cout << "How many elements in vector? ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> el;
        vec.push_back(el);
    }
    cout << "Which key? ";
    cin >> key;

    int pos = linearSearch(vec, key);

    if (pos == -1)
        cout << "NOT FOUND!";
    else
        cout << "key " << key << " found at positon " << pos;
    return 0;
}