#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    // input 3 numbers
    cout << "Enter three numbers: \n";
    cin >> a >> b >> c;

    // calculate sum, average, product
    int sum = a + b + c; 
    float avg = (a + b + c) / 3.0; // int/float -> float - /3.0 or /3.0f
    int prod = a * b * c;

    // printing values
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
    cout << "Product = " << prod << endl;
}