#include <iostream>
using namespace std;

class Person
{
public:
    string firstName, lastName;
    int age;
    double height;

    Person(string first_name, string last_name, int person_age, double person_height);
    void printInfo();
};

Person::Person(string first_name, string last_name, int person_age, double person_height)
{
    firstName = first_name;
    lastName = last_name;
    age = person_age;
    height = person_height;
};

void Person::printInfo()
{
    cout << "Full Name: " << firstName << " " << lastName << "\n"
         << "Age: " << age << "\n"
         << "Height(cm): " << height;
}

int main()
{
    Person human("Cornerstone", "Ephraim", 19, 178);
    human.printInfo();
}