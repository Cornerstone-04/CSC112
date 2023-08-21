#include <iostream>
using namespace std;
void swap(int &a, int &b);
int main()
{
    int a = 5, b = 10;
    swap(a, b);
    cout << "In main " << a << " " << b << endl;
    return 0;
}
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "In swap " << a << " " << b << endl;
}