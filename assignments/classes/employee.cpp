#include <iostream>
using namespace std;

class Employee
{
public:
    string firstName, lastName, employeeId;
    int age;
    double salary;

    Employee(string first_name, string last_name, string employee_id, int employee_age, double annual_salary);
    void displayDetails();
};

Employee::Employee(string first_name, string last_name, string employee_id, int employee_age, double annual_salary)
{
    firstName = first_name;
    lastName = last_name;
    employeeId = employee_id;
    age = employee_age;
    salary = annual_salary;
};

void Employee::displayDetails()
{
    cout << "Full Name: " << firstName << " " << lastName << "\n"
         << "Age: " << age << "\n"
         << "Employee ID: " << employeeId << "\n"
         << "Monthly Salary($): " << salary << "\n";
};

int main()
{
    Employee worker("Cornerstone", "Ephraim", "20/52HA058", 19, 49000);
    worker.displayDetails();
}
