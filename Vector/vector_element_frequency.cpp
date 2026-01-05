#include <iostream>
#include <vector>
using namespace std;

int countFrequency(vector<int> v, int n)
{
    int i, fr = 0;

    for (i = 0; i < v.size(); i++)
    {
        if (v[i] == n)
        {
            fr++;
        }
    }
    if (fr == 0)
        return -1;
    else
        return fr;
}
int main()
{
    int n, i, el, num;
    cout << "How many elements? ";
    cin >> n;
    vector<int> vec;
    for (i = 0; i < n; i++)
    {
        cin >> el;
        vec.push_back(el);
    }

    cout << "Which element to check for frequency? ";
    cin >> num;

    int fr = countFrequency(vec, num);
    if (fr == -1)
        cout << num << " is not present in vector!";
    else
        cout << "frequency of " << num << " = " << fr;
}