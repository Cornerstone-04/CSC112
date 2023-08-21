#include <iostream>

int daysInFebruary(int year) {
    if (year % 4 != 0) {
        // Rule 1: If a year is not divisible by 4, it's definitely not a leap year.
        return 28;
    } else if (year % 100 != 0) {
        // Rule 2: If a year is divisible by 4 but not by 100, it's a leap year.
        return 29;
    } else if (year % 400 != 0) {
        // Rule 3: If a year is divisible by 100 but not by 400, it's not a leap year.
        return 28;
    } else {
        // If a year is divisible by both 100 and 400, it's a leap year.
        return 29;
    }
}

int main() {
    int year;
    std::cout << "Enter the year: ";
    std::cin >> year;
    std::cout << "Number of days in February for year " << year << ": " << daysInFebruary(year) << std::endl;
    return 0;
}
