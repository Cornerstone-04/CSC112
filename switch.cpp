#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "Enter grade: ";
    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << "GP is 5";
        break;
    case 'B':
        cout << "GP is 4";
        break;
    case 'C':
        cout << "GP is 3";
        break;
    case 'D':
        cout << "GP is 2";
        break;
    case 'E':
        cout << "GP is 1";
        break;
    case 'F':
        cout << "GP is 0";
        break;

    default:
        cout << "Invalid grade";
        break;
    }
}