#include <iostream>
#include <vector>
using namespace std;

vector<int> fib(int n)
{
    int next;
    vector<int> v;

    if (n < 0)
        return v;
    v.push_back(0);
    if (n == 0)
        return v;
    v.push_back(1);
    int a = 0, b = 1;
    while (n >= 2)
    {
        next = a + b;
        v.push_back(next);
        a = b;
        b = next;
        n--;
    }
    return v;
}
int main()
{
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    vector<int> result = fib(n);
    if (result.size() == 0)
        cout << "Invalid";
    for (int i : result)
        cout << i << " ";
    return 0;
}