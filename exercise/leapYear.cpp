/*
 * Leap year is divisible by 4.
 * For the end of the century, the year is divisible by 400.
 */

#include <iostream>
using namespace std;

int getFebDays(int year)
{
    if (year % 100 == 0 && year % 10 == 0)
    {
        if (year % 400 == 0)
            return 29;
    }
    else if (year % 4 == 0)
        return 29;
    return 28;
}

int main()
{
    int year;
    cout << "Enter year: ";
    cin >> year;

    cout << getFebDays(year);
}