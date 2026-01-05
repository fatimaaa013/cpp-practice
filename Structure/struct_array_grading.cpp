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
    for (int i = 0; i < n; i++)
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
void findGrade(Student s[], int n)
{
    int pass = fail = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i].per >= 33)
            pass++;
        else
            fail++;
    }
}
void printStudent(Student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Student Data " << i + 1 << " : " << endl;

        cout << pass << " number of students passed out of / " << n << endl;
        cout << fail << " number of students failed" << endl;
    }
}
int main()
{
    int n;
    cout << "Enter number of students : " << endl;
    cin >> n;
    Student s[n];
    cout << "Taking student details : " << endl;
    cout << "--------------------------------" << endl;
    inputStudent(s, n);
    findGrade(s, n);
    cout << "***Printing student record*** : " << endl;
    printStudent(s, n);
}