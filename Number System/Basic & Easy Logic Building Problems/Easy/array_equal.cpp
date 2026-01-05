#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int s1, s2, el, i, isEqual = 1;
    cout << "Enter s1 and s2: ";
    cin >> s1 >> s2;
    vector<int> v1(s1), v2(s2);
    if (s1 != s2)
        cout << "Not equal!";
    else
    {
        cout << "Enter v1 elements: ";
        for (i = 0; i < s1; i++)
        {
            cin >> v1[i];
        }
        cout << "enter v2 elements: ";
        for (i = 0; i < s2; i++)
        {
            cin >> v2[i];
        }
        for (i = 0; i < s1; i++)
        {
            if (v1[i] != v2[i])
                isEqual = 0;
        }
        if (isEqual == 0)
            cout << "Not equal";
        else
            cout << "Equal";
    }
    return 0;
}