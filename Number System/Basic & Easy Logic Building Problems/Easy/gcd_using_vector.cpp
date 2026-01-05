#include <iostream>
#include <vector>
using namespace std;

vector<int> findFactors(int n)
{
    vector<int> factors;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            factors.push_back(i);
    }
    return factors;
}

vector<int> commonFactors(vector<int> v1, vector<int> v2)
{
    int i, j;
    vector<int> v3;
    for (i = v1.size() - 1; i >= 0; i--)
    {
        for (j = v2.size() - 1; j >= 0; j--)
        {
            if (v1[i] == v2[j])
                v3.push_back(v1[i]);
        }
    }
    return v3;
}
int main()
{
    int n1, n2;
    cout << "Enter n1 and n2: ";
    cin >> n1 >> n2;
    vector<int> v1 = findFactors(n1);
    // cout << "Factors of " << n1 << ": ";
    // for (int factor : v1)
    // {
    //     cout << factor << " ";
    // }
    // cout << endl;
    vector<int> v2 = findFactors(n2);
    // cout << "Factors of " << n1 << ": ";
    // for (int factor : v2)
    // {
    //     cout << factor << " ";
    // }
    vector<int> common = commonFactors(v1, v2);
    int gcd = 0;
    for (int i = 0; i < common.size(); i++)
    {
        if (common[i] > gcd)
            gcd = common[i];
    }
    cout << "GCD = " << gcd;
    return 0;
}