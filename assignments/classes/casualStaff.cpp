#include <iostream>
using namespace std;
class CasualStaff
{
public:
    string firstName, lastName, staffID, description;
    int age;
    double wages;

    CasualStaff(string first_name, string last_name, string staff_id, string job_description, int employee_age, double payment_per_service);
    void displayDetails();
};

CasualStaff::CasualStaff(string first_name, string last_name, string staff_id, string job_description, int employee_age, double payment_per_service)
{
    firstName = first_name;
    lastName = last_name;
    staffID = staff_id;
    description = job_description;
    age = employee_age;
    wages = payment_per_service;
};

void CasualStaff::displayDetails()
{
    cout << "Full Name: " << firstName << " " << lastName << "\n"
         << "Age: " << age << "\n"
         << "Employee ID: " << staffID << "\n"
         << "Job Description: " << description << "\n"
         << "Monthly Salary($): " << wages << "\n";
};

int main()
{
    CasualStaff worker("Cornerstone", "Ephraim", "20/52HA058", "Frontend Developer", 19, 1500);
    worker.displayDetails();
}