#include <iostream>

using namespace std;

int main()
{
    // while loop
    int counter = 1;
    while (/*condition or expression*/ counter <= 10)
    {
        /* code */
        cout << "Bolu ";
        counter++;
    }

    // do-while loop
    int count;
    do
    {
        /* code */
        cout << "Daniel ";
        count++;

    } while (/* condition */ count <= 10);

    // for loop
    for (/*initialise control variable*/ int i = 0; /*condition to be tested*/ i <= 10; /*alter variable towards termination*/ i++)
    {
        /* code */
        cout << "Cornerstone ";
    }
}