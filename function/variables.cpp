#include <iostream>
using namespace std;

int sum(int x, int y)
{
    static int z = 0;

    z += x + y;

    return z;
}

int main()
{
    cout << "Sum = " << sum(5, 5) << endl;
    cout << "Sum = " << sum(10, 10) << endl;
    cout << "Sum = " << sum(20, 20) << endl;
}