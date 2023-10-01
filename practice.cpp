#include <iostream>
using namespace std;

double calculateTotalAmount(double amount)
{
    double discount = (amount >= 200000 && amount <= 1000000) ? 0.03 : (amount > 1000000) ? 0.07
                                                                                          : 0.0;
    return amount - (amount * discount);
}

int main()
{
    char choice = 'Y';
    do
    {
        double purchaseAmount, totalAmount;
        cout << "Enter the purchase amount: ";
        cin >> purchaseAmount;
        totalAmount = calculateTotalAmount(purchaseAmount);

        cout << "Total amount after discount: " << totalAmount << endl;

        cout << "Do you want to calculate for another customer? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    // for (;choice == 'Y' || choice == 'y' ;)
    // {
    //     double purchaseAmount, totalAmount;
    //     cout << "Enter the purchase amount: ";
    //     cin >> purchaseAmount;
    //     totalAmount = calculateTotalAmount(purchaseAmount);

    //     cout << "Total amount after discount: " << totalAmount << endl;

    //     cout << "Do you want to calculate for another customer? (Y/N): ";
    //     cin >> choice;
    // }

    return 0;
}
