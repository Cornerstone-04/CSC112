#include <iostream>

using namespace std;

int determineMax(int &x, int &y)
{
    if (x > y)
        return x;
    return y;
}

int main()
{
    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    // int max = determineMax(x, y);

    cout << "Max is " << determineMax(x, y);
}
