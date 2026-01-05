#include <iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
    float per;
};

void inputStudent(Student s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Data of Student " << i + 1 << " : " << endl;

        cout << "Enter name : " << endl;
        getline(cin >> ws, s[i].name);

        cout << "Enter roll no. : " << endl;
        cin >> s[i].roll;

        cout << "Enter percentage % : " << endl;
        cin >> s[i].per;

        cout << "-------------------------------" << endl;
    }
}
void printStudent(Student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Data of Student " << i + 1 << " : " << endl;

        cout << "Name : " << s[i].name << endl;
        cout << "Roll No. : " << s[i].roll << endl;
        cout << "Percentage % : " << s[i].per << endl;
        cout << "----------------------------" << endl;
    }
}
int main()
{
    Student s[3];
    cout << "Taking student details : " << endl;
    cout << "--------------------------------" << endl;
    inputStudent(s, 3);
    cout << "***Printing student record*** : " << endl;
    printStudent(s, 3);

}