#include <iostream>
using namespace std;

/*
bool doOverlap(int l1x, int l1y, int r1x, int r1y, int l2x, int l2y, int r2x, int r2y)
{
    // horizontal gap
    if (l1x > r2x || l2x > r1x)
        return false;
    // vertical gap
    if (r1y > l2y || r2y > l1y)
        return false;
    // no gap -> overlapping occurs
    return true;
}
int main()
{
    int l1x, r1x, l1y, r1y, l2x, r2x, l2y, r2y;
    cout << "Enter top left (l1x, l1y) of rectangle 1: ";
    cin >> l1x >> l1y;
    cout << "Enter bottom right (r1x, r1y) of rectangle 1: ";
    cin >> r1x >> r1y;
    cout << "Enter top left (l2x, l2y) of rectangle 2: ";
    cin >> l2x >> l2y;
    cout << "Enter bottom right (r2x, r2y) of rectangle 2: ";
    cin >> r2x >> r2y;

    doOverlap(l1x, l1y, r1x, r1y, l2x, l2y, r2x, r2y) ? cout << "Overlapping rectangles" : cout << "Do not overlap";
    return 0;
}
*/

// using structure 'point' to group coordinates together
struct point
{
    int x, y; // coordinates
};
bool doOverlap(point l1, point r1, point l2, point r2)
{
    // horizontal gap -> Check if one rectangle is to the left of other
    if (l1.x > r2.x || l2.x > r1.x)
        return false;
    // vertical gap -> Check if one rectangle is above the other
    if (r1.y > l2.y || r2.y > l1.y)
        return false;
    // no gap -> overlapping occurs
    return true;
}
int main()
{
    point l1, r1, l2, r2; // variables of type - struct point

    // Input rectangle 1 coordinates
    cout << "Enter R1 - top left (l1.x, l1,y): ";
    cin >> l1.x >> l1.y;
    cout << "Enter R1 - bottom right (r1.x, r1.y): ";
    cin >> r1.x >> r1.y;

    // Input rectangle 2 coordinates
    cout << "Enter R2- top left (l2.x, l2.y): ";
    cin >> l2.x >> l2.y;
    cout << "Enter R2 - bottom right (r2.x, r2.y): ";
    cin >> r2.x >> r2.y;

    // check overlap and print result
    doOverlap(l1, r1, l2, r2) ? cout << "Overlapping Rectangles" : cout << "Do not overlap";
    return 0;
}