#include <iostream>
using namespace std;
int main()
{
    string str, rev;
    cout << "Enter any string of your choice " << endl;
    getline(cin >> ws, str);
    int i, j, len = str.length();
    rev = string(len, ' '); // ⬅️ allocate len number of spaces in the empty string before storing values to avoid garbage values
    for (i = len - 1, j = 0; i >= 0; i--, j++)
    {
        rev[j] = str[i];
    }
    cout << "Reverse string is:     " << rev << endl;
    return 0;
}