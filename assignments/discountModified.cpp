#include <iostream>
using namespace std;

// create a function to calculate total payment
double calculateTotalAmount(double amount)
{
    // declare discount and total amount variables
    double discount, totalAmount;
    // set discount to 3% if amount is between 200k and 1 million
    if (amount >= 200000 && amount <= 1000000)
    {
        discount = 0.03;
    }
    // set discount to 7% if amount is greater than 1 million
    else if (amount > 1000000)
    {
        discount = 0.07;
    }
    else
    {
        discount = 0.0;
    }
    // subtract discount from total amount for new amount
    return totalAmount = amount - (amount * discount);
}

int main()
{

    // initialize loop to continue the program
    for (char choice = 'Y'; choice == 'Y' || choice == 'y';)
    {
        // prompt user to enter purchase amount
        double purchaseAmount, totalAmount;
        cout << "Enter the purchase amount: ";
        cin >> purchaseAmount;

        // calculate the total amount after discount
        totalAmount = calculateTotalAmount(purchaseAmount);

        // display the total amount
        cout << "Total amount after discount: " << totalAmount << endl;

        // prompt user to continue or end program
        cout << "Do you want to calculate for another customer? (Y/N): ";
        cin >> choice;
    }

    return 0;
}