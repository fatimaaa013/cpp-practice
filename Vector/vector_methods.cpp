#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, n, el;
    cout << "How many elements?" << endl;
    cin >> n;
    // taking input
    vector<int> v2;
    for (i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << endl;
        cin >> el;
        v2.push_back(el);
    }
    cout << "Current size of vector = " << v2.size() << endl;

    // printing vector elements
    for (i = 0; i < v2.size(); i++)
    {
        cout << "Element " << i + 1 << "=" << v2[i] << endl;
    }

    cout << "*****Vector Modification Begins*****" << endl;

    // popping last element
    cout << "Popping last element " << endl;
    v2.pop_back();
    cout << "New size = " << v2.size() << endl;
    cout << "Elements after pop back" << endl;
    for (i = 0; i < v2.size(); i++)
    {
        cout << "element " << i + 1 << "=" << v2[i] << endl;
    }

    // clearing vector
    cout << "*****Clearing Vecor*****" << endl;
    v2.clear();
    cout << "Size after clearing the vector = " << v2.size() << endl;

    // testing if vector is empty
    if (v2.empty())
        cout << "Vector is empty!" << endl;
    else
        cout << "Vector has some contents" << endl;
}