#include <iostream>
using namespace std;
int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool isLeap(int y)
{
    return (y % 4 == 0 && (y % 100 != 0) || y % 400 == 0);
}
bool isValidDate(int d, int m, int y)
{
    if (y < 0 || m < 1 || m > 12)
        return false;
    int maxDays = (m == 2 && isLeap(y)) ? 29 : monthDays[m - 1];
    return (d >= 1 || d <= maxDays);
}
int daysByYearsPassed(int y)
{
    int days = 0;
    for (int i = 1900; i < y; i++)
    {
        if (isLeap(i))
            days += 366;
        else
            days += 365;
    }
    return days;
}
int daysByMonth(int m, int y)
{
    int days = 0, i;
    for (i = 0; i < m - 1; i++) // start from 0 -> Jan to m-1
        days += monthDays[i];
    if (m > 2 && isLeap(y))
        days += 1;
    return days;
}
int daysInCurrentMonth(int d)
{
    return d - 1;
}
int dayOfWeek(int d, int m, int y)
{

    // Jan, Feb, Mar...
    int totalDays = (daysByYearsPassed(y) + daysByMonth(m, y) + daysInCurrentMonth(d) + 1);
    return totalDays % 7;
}
int main()
{
    int d, m, y;
    cout << "Enter date, month and year: ";
    cin >> d >> m >> y;
    if (isValidDate(d, m, y))
        cout << dayOfWeek(d, m, y);
    else
        cout << "Enter a valid date!";
    return 0;
}