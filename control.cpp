#include <iostream>

using namespace std;

int main()
{
    // if
    int x = 20;
    if (x)
    {
        cout << "C++ lecture";
        x = x - 1;
    }

    // if-else statement
    int age = 50;
    if (age < 40)
    {
        cout << "Young";
    }
    else
    {
        cout << "Old";
    }

    // else-if statement
    double score;

    cout << "Enter score: ";
    cin >> score;

    if (score >= 70)
    {
        cout << "Grade is A";
    }
    else if (score >= 60 && score < 70)
    {
        cout << "Grade is B";
    }
    else if (score >= 50 && score < 60)
    {
        cout << "Grade is C";
    }
    else if (score >= 45 && score < 49)
    {
        cout << "Grade is D";
    }
    else if (score >= 40 && score < 45)
    {
        cout << "Grade is E";
    }
    else
    {
        cout << "Grade is F";
    }
}