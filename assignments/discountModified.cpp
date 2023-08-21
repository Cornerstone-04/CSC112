#include <iostream>
using namespace std;

// create a function to calculate total payment
double calculateTotalAmount(double amount)
{
    double discount =
        (amount >= 200000 && amount <= 1000000) ? 0.03 : (amount > 1000000) ? 0.07
                                                                            : 0.0;

    return amount * (1 - discount);
}

int main()
{
    char choice = 'Y';
    while (choice == 'Y' || choice == 'y')
    {
        double purchaseAmount;
        cout << "Enter the purchase amount: ";
        cin >> purchaseAmount;

        // calculate and display the total amount after discount
        cout << "Total amount after discount: " << calculateTotalAmount(purchaseAmount) << endl;

        // prompt user to continue or end program
        cout << "Do you want to calculate for another customer? (Y/N): ";
        cin >> choice;
    }

    return 0;
}