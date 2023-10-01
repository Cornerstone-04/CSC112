#include <iostream>
#include <string>
using namespace std;

class Result
{
public:
    string fullName, matricNo;
    double gradePointAverage;

    Result(string full_name, string matric_no, double gpa);
    void displayResult();
};

Result::Result(string full_name, string matric_no, double gpa)
{
    fullName = full_name;
    matricNo = matric_no;
    gradePointAverage = gpa;
};

void Result::displayResult()
{
    cout << "Full Name: " << fullName << "\n"
         << "Matric Number: " << matricNo << "\n"
         << "Grade Point Average: " << gradePointAverage << "\n";
}

int main()
{
    string fullName, matricNo;
    double gpa;

    cout << "Enter Full name: ";
    getline(cin, fullName);
    cout << "Enter Matric Number: ";
    cin >> matricNo;
    cout << "Enter GPA: ";
    cin >> gpa;

    Result student(fullName, matricNo, gpa);
    student.displayResult();

    return 0;
}
