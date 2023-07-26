/**
 * A class is an extension of a struct data type and adds features for function definition.
 * Structs are like objects without methods(OOP).
 */

// Calculate a distance b/w two points A and B
/**
 * Class definition: "class" keyword followed by name and curly braces
 * No access modifiers
 * NB: all members of class are private by default
 */
#include <iostream>
using namespace std;
class point
{
public:
    int x;
    int y;

    // scope resolution operator ties a function to its respective class.
    void display();

    /**
     * constructors are used to instantiate members of a particular class.
     * They must have the same name as the class
     * no return type is indicated
     * Types: Default, Non-default, Copy.
     * Default is provided automatically (has no arguments)
     * Non-default takes arguments
     * Copy accepts arguments of the same type as the class.
     * */

    // default
    point();

    // non-default
    point(int point_a, int point_b);

    // copy
    point(point &arg);
};

point::point(int point_a, int point_b)
{
    x = point_a;
    y = point_b;
}

point::point()
{
    x, y = 0;
}

point::point(point &arg)
{
    x = arg.x;
    y = arg.y;
}

void point::display()
{
    cout << "Point A: " << x << endl;
    cout << "Point B: " << y << endl;
}