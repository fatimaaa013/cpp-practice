#include <iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
    float per;
};
void inputStudent(struct Student &s)
{
    cout << "Enter name : " << endl;
    getline(cin >> ws, s.name);

    cout << "Enter roll no. : " << endl;
    cin >> s.roll;

    cout << "Enter percentage % : " << endl;
    cin >> s.per;
}
void printStudent(struct Student &s) // if passing
{
    cout << "-----------------------------" << endl;
    cout << "Displaying student record: " << endl;

    cout << "Name : " << s.name << endl;
    cout << "Roll No. : " << s.roll << endl;
    cout << "Percentage % : " << s.per << endl;
}
int main()
{
    struct Student s;
    inputStudent(s);
    printStudent(s);
    /* By reference
    -> void inputStudent(Student &s);   // ✅ call with (s)
    */

    /* By pointer
    -> void inputStudent(Student *s);   // ✅ call with (&s) 
    */

    return 0;
}