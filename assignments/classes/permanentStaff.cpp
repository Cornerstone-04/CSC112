#include <iostream>
#include <string>
using namespace std;

class PermanentStaff
{
public:
    string firstName, lastName, staffID, description;
    int age;
    double salary;

    PermanentStaff(string first_name, string last_name, string staff_ID, string job_description, int employee_age, double monthly_salary);
    void displayDetails();
};

PermanentStaff::PermanentStaff(string first_name, string last_name, string staff_ID, string job_description, int employee_age, double monthly_salary)
{
    firstName = first_name;
    lastName = last_name;
    staffID = staff_ID;
    description = job_description;
    age = employee_age;
    salary = monthly_salary;
};

void PermanentStaff::displayDetails()
{
    cout << "Full Name: " << firstName << " " << lastName << "\n"
         << "Age: " << age << "\n"
         << "Employee ID: " << staffID << "\n"
         << "Job Description: " << description << "\n"
         << "Monthly Salary($): " << salary << "\n";
};

int main()
{
    PermanentStaff worker("Cornerstone", "Ephraim", "20/52HA058", "Frontend Developer", 19, 49000);
    worker.displayDetails();

    return 0;
}