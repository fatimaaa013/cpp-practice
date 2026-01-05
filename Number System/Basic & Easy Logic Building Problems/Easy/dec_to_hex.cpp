#include <iostream>
#include <string>
using namespace std;
string decToHex(int n)
{
    char hexChar[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    string hexdec = "", rev = "";
    if (n < 0)
        return "-1";
    if (n == 0)
        return "0"; // needed 
    while (n != 0)
    {
        int rem = n % 16;
        hexdec += hexChar[rem];
        // OR hexdec = hexChar[rem] + hexdec - add in reverse w/o backward rev loop
        n = n / 16;
    }
    for (int i = hexdec.length() - 1; i >= 0; i--)
    {
        rev += hexdec[i];
    }
    return rev;
}
int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    string res = decToHex(n);
    if (res == "-1")
        cout << "Invalid";
    else
        cout << "Hexadecimal of " << n << " = " << res;
    return 0;
}

// string decToHex(int n)
// {
//     char hexChar[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
//     int c = 0, temp = n, rem;
//     if (n < 0)
//         return "-1";
//     if (n == 0)
//         return "0";
//     while (temp != 0)
//     {
//         temp = temp / 16;
//         c++;
//     }
//     string rev(c, ' ');
//     int i = c - 1;
//     while (n != 0)
//     {
//         rem = n % 16;
//         rev[i] = hexChar[rem];
//         n = n / 16;
//         i--;
//     }
//     return rev;
// }