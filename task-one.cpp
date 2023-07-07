#include <iostream>
using namespace std;

int main()
{
    // declare purchaseAmount, discount and totalAmount
    double purchaseAmount, discount, totalAmount;

    // prompt user to enter purchase amount
    cout << "Enter purchase amount: ";
    cin >> purchaseAmount;

    // set discount to 3% if purchase is between 200k and 1million
    if ((purchaseAmount >= 200000) && (purchaseAmount <= 1000000))
    {
        discount = 0.03;
    } /*set discount to 7% if purchase is greater than 1million*/
    else if (purchaseAmount > 1000000)
    {
        discount = 0.07;
    }
    else
    {
        discount = 0.0;
    }

    // calculate total amount after discount
    totalAmount = purchaseAmount - (purchaseAmount * discount);

    // display total amount
    cout << "Total amount after discount: " << totalAmount << endl;
    return 0;
}