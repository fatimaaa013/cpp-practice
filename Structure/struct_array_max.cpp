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
void maxStudent(Student s[], int n)
{
    int i, index = 0, max = s[0].per; // initialize index to zero in case no other % is > max
    for (i = 1; i < n; i++)
    {
        if (s[i].per > max)
        {
            max = s[i].per;
            index = i; // break will exit as soon as it finds one % > max - so instead store the max % index in a separate variable
        }
    }
    cout << "Printing Topper's Record : " << endl;
    cout << "Name : " << s[index].name << endl;
    cout << "Roll No. : " << s[index].roll << endl;
    cout << "Percentage : " << s[index].per << endl;
}
int main()
{
    Student s[3];
    cout << "Taking student details : " << endl;
    cout << "--------------------------------" << endl;
    inputStudent(s, 3);
    maxStudent(s, 3);
}