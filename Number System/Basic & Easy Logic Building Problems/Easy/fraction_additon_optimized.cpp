#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int lcm(int a, int b)
{
    return (a / gcd(a, b) * b);
}
vector<int> addFraction(vector<int> a, vector<int> b)
{
    int num, den, simplified_num, simplified_den, g, l;
    vector<int> result;
    
    l = lcm(a[1] , b[1]);                   
    den = l;                                 // bd
    num = a[0] * (l/a[1]) + b[0] * (l/b[1]); // ad+bc/bd
    
    g = gcd(num, den);
    simplified_num = num / g;
    simplified_den = den / g;
    
    if(simplified_den < 0)
    {
        simplified_num *= -1;
        simplified_den *= -1;
    }
    
    result.push_back(simplified_num);
    result.push_back(simplified_den);
    
    return result;
}
int main()
{
    vector<int> a(2), b(2), c; // give size = 2 because the vector is empty initally
    cout << "a = ";
    cin >> a[0] >> a[1];
    cout << "b = ";
    cin >> b[0] >> b[1];
    if (a[1] == 0 || b[1] == 0)
        cout << "Undefined operation" << endl;
    else
    {
        c = addFraction(a, b);
        cout << "Output: [" << c[0] << ", " << c[1] << "]";
    }
    return 0;
}