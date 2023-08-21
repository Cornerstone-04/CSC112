#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.141592654;
double calculateAreaOfCylinder(double radius, double height)
{
    return ((2 * pi * pow(radius, 2)) + (2 * pi * radius * height));
};

double calculateVolumeOfCylinder(double radius, double height)
{
    return (pi * pow(radius, 2) * height);
}

int main()
{
    double radius, height;
    cout << "Enter radius: ";
    cin >> radius;

    cout << "Enter height: ";
    cin >> height;

    cout << "The total surface area of the cylinder is " << calculateAreaOfCylinder(radius, height) << endl;
    cout << "The volume of the cylinder is " << calculateVolumeOfCylinder(radius, height) << endl;

    return 0;
}