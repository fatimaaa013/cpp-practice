#include <iostream>
#include <cmath>
using namespace std;

float distanceBetweenPoints(int x1, int y1, int x2, int y2)
{
    int d1 = x2 - x1;
    int d2 = y2 - y1;
    float dist = sqrt(d1 * d1 + d2 * d2);
    return dist;
}
int main()
{
    int x1, x2, y1, y2;
    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;
    cout << "distance between (" << x1 << "," << y1 << ") & (" << x2 << "," << y2 << ") = " << distanceBetweenPoints(x1, y1, x2, y2);
}