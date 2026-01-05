#include <iostream>
#include <vector>
using namespace std;

void sortVector(vector<int> &v) // & -> pass by reference to reflect in main()
{
    int pass, comparison, temp;
    for (pass = 0; pass < v.size() - 1; pass++) // n-1 pairs for comparison
    {
        bool swapped = false; // no swaps done

        for (comparison = 0; comparison < v.size() - 1 - pass; comparison++)
        // after each pass, largest element in that pass gets sorted -> (n-1)-i comparisons
        {
            if (v[comparison] > v[comparison + 1])
            {
                swap(v[comparison], v[comparison + 1]);
                swapped = true;
            }
        }

        // bubble sort optimization
        if (!swapped) // !swap -> no swaps done -> array already sorted
            break;
    }
}
int main()
{
    int n, i, el;
    cout << "How many elements? ";
    cin >> n;
    vector<int> vec;
    for (i = 0; i < n; i++)
    {
        cin >> el;
        vec.push_back(el);
    }
    sortVector(vec);
    for (int i : vec)
        cout << i << " ";
    return 0;
}