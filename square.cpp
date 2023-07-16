#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

double calculateAreaOfSquare(double length)
{
    return pow(length, 2);
}

double calculatePerimeterOfSquare(double length)
{
    return (4 * length);
}

int main()
{
    double length;
    cout << "Enter length of square: ";
    cin >> length;

    cout << "Area of square: " << calculateAreaOfSquare(length) << endl;
    cout << "Perimeter of square: " << calculatePerimeterOfSquare(length) << endl;
}