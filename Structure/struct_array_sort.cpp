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
void sortStudentByPercentage(Student s[], int n)
{
    int i, j;
    Student temp; // swapping structure variable with another structure variable
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (s[j].per < s[j + 1].per)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
                // swap the entire sturcture of student not just % - it will cause information mismatch
            }
        }
    }
}
void printStudentByPercentage(Student s[], int n)
{
    cout << "Printing student record in decreasing order of % : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "st position " << endl;
        cout << "Name : " << s[i].name << endl;
        cout << "Roll No. " << s[i].roll << endl;
        cout << "Percentage % : " << s[i].per << endl;
        cout << "---------------------------" << endl;
    }
}

int main()
{
    Student s[3];
    cout << "Taking student details : " << endl;
    inputStudent(s, 3);
    sortStudentByPercentage(s, 3);
    printStudentByPercentage(s, 3);
}