#include <iostream>
#include <string>
using namespace std;

class Std_Basic
{
public:
    string name, gender;

    Std_Basic(string user_name, string user_gender);
    void getBasicInfo();
};

Std_Basic::Std_Basic(string user_name, string user_gender)
{
    name = user_name;
    gender = user_gender;
};

void Std_Basic::getBasicInfo()
{
    cout << "Student name: " << name << endl;
    cout << "Gender: " << gender << endl;
}

int main()
{
    string name, gender;

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter gender(M/F): ";
    cin >> gender;

    Std_Basic student(name, gender);
    student.getBasicInfo();
}
