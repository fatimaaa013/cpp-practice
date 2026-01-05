#include <iostream>
using namespace std;
int closestNumber(int n, int m)
{
    // we check the closest possible multiples of m near n by calculationg quotient first
    int nearest_higher, nearest_lower, q;

    q = (n / m);

    // q*m gives the max lower value <= n
    nearest_lower = q * m;
    // depending upon q -> we either add or subtract 'm' from the nearest lower
    // for +ve values -> higher is the next lowest value just >= n -> which will be lower + m
    // for -ve values -> higher is the next lowest value just >= n -> which will be lower - n

    nearest_higher = (n*m > 0) ? (nearest_lower + m) : (nearest_lower - m); // for handling -ve values
    // n*m > 0 - handles all cases with + and - signs
    // it gives the direction of movement based on sign of n*m

    int d1 = abs(n - nearest_lower);
    int d2 = abs(nearest_higher - n);

    // we calculate 2 differences from n, between nearest lower and n and btw nearest higher and n
    // the the value that gives the least diff is returned
    if (d1 < d2)
        return nearest_lower;
    else if (d2 < d1)
        return nearest_higher;
    // if diff is same - the max abs(closest) is returned as the closest number
    else
        return (abs(nearest_higher) > abs(nearest_lower) ? nearest_higher : nearest_lower);
        // if diff is same - calculate absolute values of both closest numbers and return the higher value
}
int main()
{
    int n, m;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;
    if (m != 0)
        cout << "Closest value = " << closestNumber(n, m);
    else    
        cout << "Invalid!";
    return 0;
}