#include <iostream>
using namespace std;

int factorial(int n)
{
    return n == 0 ? 1 : n * factorial(n - 1);
}

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    cout << "The factorial of the number is " << factorial(number);
    return 0;
}