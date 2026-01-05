// Single Number problem using XOR Gate
#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int> &nums)
{
    int unique = 0;
    for (int i : nums)
        unique ^= i; // XOR cancels single duplicates 
    return unique;
}
int main()
{
    vector<int> v = {4, 1, 2, 1, 2};

    cout << singleNumber(v);
    return 0;
}