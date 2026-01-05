#include <iostream>
using namespace std;
struct Student
{
    string name;
    int roll;
    float per;
};
int main()
{
    struct Student s;
    cout << "Enter student's name : " << endl;
    getline(cin >> ws, s.name);
    cout << "Enter roll no. : " << endl;
    cin >> s.roll;
    cout << "Enter % : " << endl;
    cin >> s.per;
    cout << "------------------------" << endl;
    cout << "Displaying student record : " << endl;
    cout << s.name << endl;
    cout << s.roll << endl;
    cout << s.per << endl;
    return 0;
}