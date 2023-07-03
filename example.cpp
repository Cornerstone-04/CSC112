#include <iostream>
using namespace std;

int main()
{
    // continue
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            continue;
        ;
        cout << "name ";
    }

    // break
    for (int i = 0; i < 10; i++)
    {
        if (i > 5)
            break;
        cout << "result";
    }
}
