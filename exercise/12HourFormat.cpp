#include <iostream>
#include <string>

using namespace std;

string convertTo12HourFormat(int hour, int minute)
{
    string period = "AM";

    if (hour >= 12)
    {
        period = "PM";
        if (hour > 12)
        {
            hour -= 12;
        } // Convert hour to 12-hour format
    }
    else if (hour == 24)
    {
        period = "AM";
        hour = 0;
    }

    string hourStr = to_string(hour);
    string minuteStr = (minute < 10) ? "0" + to_string(minute) : to_string(minute);

    string timeStr = hourStr + ":" + minuteStr + " " + period;
    return timeStr;
}

int main()
{
    int hour, minute;
    cout << "Enter the hour (0-23): ";
    cin >> hour;
    cout << "Enter the minute (0-59): ";
    cin >> minute;

    string convertedTime = convertTo12HourFormat(hour, minute);
    cout << "Converted time: " << convertedTime << endl;

    return 0;
}