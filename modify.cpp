#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double amount, discount, totalamount;
    string choice;

    do
    {
        cout << "Enter amount: ";
        cin >> amount;

        if (amount >= 200000 && amount <= 1000000)
        {
            discount = 0.03;
        }
        else if (amount > 1000000)
        {
            discount = 0.07;
        }

        totalamount = amount - (amount * discount);

        cout << "Total amount: " << totalamount << endl;

        cout << "Rerun program?(Y/N): ";
        cin >> choice;
    } while (choice == "y" || choice == "Yes");

    return 0;
}