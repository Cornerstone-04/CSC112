#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int n;
    // std::cin >> n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     std::cin >> a[i];
    // }
    // int max = a[0];
    // for(int i=0;i<n;i++){
    //     if(a[i]>max){
    //         max = a[i];
    //     }
    // }
    // int min = a[0];
    // for(int i=0;i<n;i++){
    //     if(a[i]<min){
    //         min = a[i];
    //     }
    // }
    // std::cout << max << " " << min;
    // return 0;

    // repping characters with their respective ASCII values
    /*char a = 65, b = 66, c = 67;
    cout << a << " " << b << " " << c;*/

    // string concatenation
    string firstName = "Cornerstone";
    string lastName = "Ephraim";
    string fullName = firstName + " " + lastName;
    cout << fullName << endl;

    // using append function
    string name = "Cornerstone";
    name.append(" ").append("Ephraim"); //or name.append(" Ephraim")
    cout << name <<endl;

    // using length function
    cout << fullName.length() << endl;

    // using access operator
    cout << fullName[0] << endl;

    //using getLine function
    string middleName;
    cout << "Enter your middle name: ";
    getline(cin, middleName);
    cout << middleName << endl;

    return 0;
}