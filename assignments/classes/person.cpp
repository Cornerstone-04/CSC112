#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string fullName;
    int age;
    double height;

    Person(string full_name, int person_age, double person_height);
    void printInfo();
};

Person::Person(string full_name, int person_age, double person_height)
{
    fullName = full_name;
    age = person_age;
    height = person_height;
};

void Person::printInfo()
{
    cout << "Full Name: " << fullName << "\n"
         << "Age: " << age << " year(s)"
         << "\n"
         << "Height(cm): " << height;
}

int main()
{
    string userFullName;
    int userAge;
    double userHeight;

    cout << "Enter full name: ";
    getline(cin, userFullName);
    cout << "Enter age: ";
    cin >> userAge;
    cout << "Enter height(cm): ";
    cin >> userHeight;
    cout<< endl;

    Person human(userFullName, userAge, userHeight);
    human.printInfo();
}