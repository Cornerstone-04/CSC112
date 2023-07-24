#include <iostream>
using namespace std;

void returnReverseOrder(int numbers_set[], int size)
{
    if (size == 0)
        return;

    cout << numbers_set[size - 1] << " ";

    returnReverseOrder(numbers_set, size - 1);
}

int main()
{
    int size;

    cout << "Enter the number of integers: ";
    cin >> size;

    int numbers_set[size];

    cout << "Enter " << size << " integers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> numbers_set[i];
    }

    cout << "Reverse order: ";
    returnReverseOrder(numbers_set, size);

    return 0;
}