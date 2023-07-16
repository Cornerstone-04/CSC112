#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

// declare function to calculate area
double calculateArea(double base, double height)
{
    return base * height;
};

// declare function to calculate perimeter
double calculatePerimeter(
    double base, double height)
{
    return 2 * (base + height);
};

int main()
{
    int choice;

    // prompt user to select type of parallelogram
    cout << "Select type of parallelogram:\n";
    cout << "1. Rectangle\n";
    cout << "2. Square\n";
    cout << "3. Rhombus\n";
    cout << "4. Parallelogram\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // if choice is 1, calculate for a rectangle
    if (choice == 1)
    {
        double length, breadth;

        // prompt user to enter value of rectangle's length and breadth
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;

        // return perimeter of rectangle
        cout << "Perimeter of the rectangle = " << calculatePerimeter(length, breadth) << " units" << endl;

        // return area of rectangle
        cout << "Area of the rectangle = " << calculateArea(length, breadth) << " square units" << endl;
    }
    // if choice is 2, calculate for a square
    else if (choice == 2)
    {
        double length;

        // prompt user to enter value of square's length
        cout << "Enter length: ";
        cin >> length;

        // return perimeter of square
        cout << "Perimeter of square = " << calculatePerimeter(length, length) << " units" << endl;

        // return area of square
        cout << "Area of the square = " << calculateArea(length, length) << " square units" << endl;
    }
    // if choice is 3, calculate for a rhombus
    else if (choice == 3)
    {
        double side_1, side_2, area;

        // prompt user to enter value of rhombus' sides
        cout << "Enter side 1: ";
        cin >> side_1;
        cout << "Enter side 2: ";
        cin >> side_2;

        // return area of rhombus
        cout << "Perimeter of rhombus = " << calculatePerimeter(side_1, side_2) << " units" << endl;

        // calculate area of rhombus
        area = 0.5 * calculateArea(side_1, side_2);

        // return area of rhombus
        cout << "Area of the rhombus = " << area << " square units" << endl;
    }
    // if choice is 4, calculate for a parallelogram
    else if (choice == 4)
    {
        double base, height;

        // prompt user to enter value of parallelogram's base and height
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;

        // return perimeter of parallelogram
        cout << "Perimeter of parallelogram = " << calculatePerimeter(base, height) << " units" << endl;

        // return area of parallelogram
        cout << "Area of parallelogram = " << calculateArea(base, height) << " square units" << endl;
    }
    // if choice is not 1, 2, 3 or 4, display an error message
    else
    {
        cout << "Not a valid option";
    }

    return 0;
}
