#include <iostream>
using namespace std;
void pointerSwap(int *a, int *b) // *a, *b are pointers that hold the address of n1 and n2
{
    int temp;
    temp = *a; // temp = *a = *(&n1) = n1; temp holds n1
    *a = *b;   // *a = *(&n1) = n1 = *b = *(&n2) = n2; so n1 = n2; n1 holds n2
    *b = temp; // *b = *(&n2) = n2 = temp = n1; so n2 holds n1 - values swapped
    cout << "after swapping, n1 = " << *a << ",  n2 = " << *b << endl;
}
int main()
{
    int n1, n2;
    cout << "Enter two numbers: " << endl;
    cin >> n1 >> n2;
    cout << "Before swapping, n1 = " << n1 << ",  n2 = " << n2 << endl;
    // int *a = &n1, *b = &n2, temp;
    // temp = *a; // temp = *a = *(&n1) = n1 - store n1 in temp
    // *a = *b;   // *a = *(&n1) = n1 = *(&n2) = n2 - store n2 in n1
    // *b = temp; // *b = *(&n2) = n2 = temp = n1 - store n1 in n2 - values swapped
    // cout << "after swapping, n1 = " << *a << ",  n2 = " << *b << endl;
    pointerSwap(&n1, &n2);
    return 0;
}