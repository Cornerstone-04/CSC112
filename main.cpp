#include <iostream>
using namespace std;

class Worker
{
private:
    int salary;

public:
    void setSalary(int money)
    {
        salary = money;
    }

    int getSalary()
    {
        return salary;
    }
};

int main()
{
    // string food = "rice";
    // string &meal = food;

    // cout << food << endl
    //      << meal;

    Worker employee;
    employee.setSalary(30000);
    cout << employee.getSalary();
    return 0;
}