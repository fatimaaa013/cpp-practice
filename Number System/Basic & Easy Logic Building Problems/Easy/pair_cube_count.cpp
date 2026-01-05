#include <iostream>
#include <cmath>
using namespace std;
// 1
// void pairCubeCount(int n)
// {
//     int c = 0;
//     for (int a = 0; a <= floor(cbrt(n)); a++)
//     {
//         for (int b = 0; b <= floor(cbrt(n)); b++)
//         {
//             if (a * a * a + b * b * b == n)
//             {
//                 cout << "(" << a << "," << b <<")" ;
//                 c++;
//             }
//         }
//     }
//     cout << " -> pairs = " << c;
// }

// 2
void pairCubeCount(int n)
{
    int c = 0;
    for (int b = 0; b <= floor(cbrt(n)); b++)
    {
        int cube_b = b * b * b;  // b^3
        int cube_a = n - cube_b; // a^3 = n - b^3
        if (cube_a >= 0)
        {
            int root_a = cbrt(cube_a);
            if (root_a * root_a * root_a == cube_a)
            {
                c++;
                cout << "(" << root_a << "," << b << ")";
            }
        }
    }
    cout << " -> pairs = " << c;
}
int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    pairCubeCount(n);
    return 0;
}
