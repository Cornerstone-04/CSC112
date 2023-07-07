#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, x1, x2, desc;

    // prompt user to input values for coefficients a, b, c
    cout << "Enter coefficient a =";
    cin >> a;

    cout << "Enter coefficient b =";
    cin >> b;

    cout << "Enter coefficient c =";
    cin >> c;

    // initialise desc formula1
    desc = (b * b) - (4 * a * c);

    // check if desc is greater than 0
    if (desc > 0)
    {
        x1 = (-b + sqrt(desc)) / (2 * a);
        x2 = (-b - sqrt(desc)) / (2 * a);
        // print roots
        cout << "x1 = " << x1 << " "
             << "x2 = " << x2;
    }

    // check if desc is equal to 0
    if (desc == 0)
    {
        x1 = -b / (2 * a);
        x2 = x1;
        // print roots
        cout << "Equal roots x1=x2= " << x1;
    }

    // check if desc is less than 0
    if (desc < 0)
        // print conclusion
        cout << "Complex roots";

    return 0;
}