#include <iostream>
using namespace std;

class Employee
{
public:
    string firstName;
    string lastName;
    string employeeId;
    int age;
    double salary;

    Employee(string first_name, string last_name, string employee_id, int age, double salary);
    void displayDetails();
};

Employee::Employee(string first_name, string last_name, string employee_id, int age, double salary)
{
    firstName = first_name;
    lastName = last_name;
    employeeId = employee_id;
    age = age;
    salary = salary;
};

void Employee::displayDetails()
{
    cout << firstName << "\n"
         << lastName << "\n"
         << age << "\n"
         << employeeId << "\n"
         << salary << "\n";
};

int main()
{
    Employee worker("Cornerstone", "Ephraim", "20/52HA058", 19, 49000);
    worker.displayDetails();
}
