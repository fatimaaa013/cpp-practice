// return the number facing opposite to the rolled number on dice
// in a regular dice, 1 <-> 6, 2 <-> 5, 3 <-> 4 are the opposite facing pairs

#include <iostream>
using namespace std;

/* 1st approach - using if else
int getOppositeFace(int n)
{
    if (n == 1)
        return 6;
    else if (n == 2)
        return 5;
    else if (n == 3)
        return 4;
    else if (n == 4)
        return 3;
    else if (n == 5)
        return 2;
    else if (n == 6)
        return 1;
    else
        return -1;
}
*/

/* Using switch
int getOppositeFace(int n)
{
    switch (n)
    {
    case 1:
        return 6;
    case 2:
        return 5;
    case 3:
        return 4;
    case 4:
        return 3;
    case 5:
        return 2;
    case 6:
        return 1;
    default:
        return -1;
    }
}
*/

// 2nd approach - using sum of opposite faces = 7
int getOppositeFace(int n)
{
    if (n > 0 && n < 7)
        return 7 - n;
    else
        return -1;
}
int main()
{
    int face;
    cout << "Enter face: ";
    cin >> face;

    int opp = getOppositeFace(face);

    if (opp == -1)
        cout << "Invalid";
    else
        cout << "Opposite face : " << opp;
    return 0;
}