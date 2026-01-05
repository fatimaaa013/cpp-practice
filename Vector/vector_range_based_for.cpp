#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //     int x;
    //     vector<int> v = {1, 2, 3, 4, 5};
    //     for (auto x : v) // copy of values are passed
    //     {
    //         x *= 2; // does NOT affect the original vector
    //     }
    //     // copy gets the change not the original vector
    //     cout << "No changes : ";
    //     for (auto x : v)
    //     {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    //     // address are passed
    //     cout << "Values doubled : ";
    //     for (auto &x : v) // reference passed
    //     {
    //         x *= 2; // DOES change the original vector
    //     }
    //     // changes in x reflect in vector
    //     for (auto x : v)
    //     {
    //         cout << x << " ";
    //     }

    // int x, i , min, max, n;
    // cout << "How many elements ? ";
    // cin >> n;
    // vector<int> v;
    // for (i = 0; i < n; i++)
    // {
    //     cout << "Enter vector element " << i + 1 << " ";
    //     cin >> x;
    //     v.push_back(x);
    // }
    // min = v[0];
    // max = v[0];
    // for (auto x : v)
    // {
    //     if (x < min)
    //         min = x;
    //     if (x > max)
    //         max = x;
    // }
    // cout << "minimum element is " << min << endl;
    // cout << "maximum element is " << max << endl;

    // int key, i, pos;
    // // use size_t i for larger vectors
    // // v.size() returns values of type size_t and i is int so compiler can throw warnings
    // int found = 0;
    // vector<int> v = {12, 24, 54, 76, 87, 92};
    // cout << "Input vector: ";
    // for (auto x : v)
    //     cout << x << " ";
    // cout << endl;
    // cout << "Enter key to search: ";
    // cin >> key;
    // for (i = 0; i < v.size(); i++)
    // {
    //     if (v[i] == key)
    //     {
    //         found = 1;
    //         pos = i+1;
    //         cout << "FOUND at position " << pos << endl;
    //         break;
    //     }
    // }
    // if(found == 0)
    //     cout << "Not found!";

    vector<char> v = {'a', 'b', 'c', 'd', 'e'};
    cout << "size = " << v.size() << endl;
    v.push_back('f');
    v.push_back('g');
    cout << "size after push back = " << v.size() << endl;
    v.pop_back();
    cout << "size after pop back = " << v.size() << endl;

    // for (char ch : v)
    //     cout << ch << " "; // ❌ - ch here is the value NOT the index
    // cout << endl;
    cout << v.at(0) << " ";
    cout << v.at(1) << " ";
    cout << v.at(2) << " ";
    cout << v.at(3) << " ";
    cout << v.at(4) << " ";
    cout << v.at(5) << " ";
    cout << v.at(7) << " ";
    cout << endl;
    cout << "front = " << v.front() << endl; // gives front/first value
    cout << "back = " << v.back() << endl;  // gives back/last value

    return 0;
}