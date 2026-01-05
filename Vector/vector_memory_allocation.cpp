#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    // v.push_back(0); // size = 1
    // v.push_back(1); // size = 1*2 = 2
    // v.push_back(2); // size = 2*2 = 4
    // v.push_back(3); // size = 4 OR 4*2 = 8 as per need
    // v.push_back(4);

    // cout << "Size of vector = " << v.size() << endl;         // 4
    // cout << "Capacity of vector = " << v.capacity() << endl; // 4 || 8

    // capacity growth in vectors
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
        cout << "after push back " << i << " size = " << v.size() << " and capacity = " << v.capacity() << endl;
    }
    return 0;
}