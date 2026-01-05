// use appropriate header file - <vector>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, n, el, xt;
    cout << "Enter number of elements: " << endl;
    cin >> n;

    // creating a vector - syntax
    vector<int> v1; // empty vector of integers
    // vector<int> v = {1,2,3};
    // vector<int> v(4,0); -> 2 values passed, first - size, second, values
    // vector<int> v(5); -> creates a vector of size 5 with all values = 0

    // add elements to vector
    for (i = 0; i < n; i++) // use 'n' in input since v1 is empty, therefore -> v1.size = 0
    {
        cout << "Enter element - " << i + 1 << endl;

        // first take input -> push it into the vector -> else it will remain empty
        // use a separate variable to take input -> indices will then appear in the vector
        // w/o it -> vector remains empty
        cin >> el;
        v1.push_back(el); // adds element to the end of vector
    }
    cout << "Current size of vector = " << v1.size() << endl;

    // adding more elements than the size to show vectors are dynamic in nature
    cout << "How many more elements to add? " << endl;
    cin >> xt;
    for (i = 0; i < xt; i++)
    {
        cout << "Enter element - " << n + i + 1 << endl; // continuing umbering from og vector
        cin >> el;
        v1.push_back(el);
    }

    // printing updated size and values
    cout << "Updated size of vector = " << v1.size() << endl; // v1 ceated -> use dyanamic sizing now

    for (i = 0; i < v1.size(); i++)
    {
        cout << "Element " << i + 1 << " = " << v1[i] << endl;
        // indexing works just like arrays
    }

    // trying safe and unsafe access - to check for bounds - use v1.at(index no.)
    cout << "Unsafe Access!" << endl;
    cout << v1[10] << endl;
    // gives garbage value

    cout << "Safe Access!" << endl;
    cout << v1.at(10) << endl;
    // throws out of bounds error

    return 0;
}